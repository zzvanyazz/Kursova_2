#include "dayinputform.h"
#include "ui_dayinputform.h"
#include <QSqlQuery>
#include <QDebug>
DayInputForm::DayInputForm(int dayOfWeek, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DayInputForm)
{
    
    ui->setupUi(this);
    CurrentDayOfWeek = dayOfWeek;
    Subjects[0] = ui->comboBoxFirstSubject;
    Subjects[1] = ui->comboBoxSecondSubject;
    Subjects[2] = ui->comboBoxThirdSubject;
    Subjects[3] = ui->comboBoxFourthSubject;
    Subjects[4] = ui->comboBoxFifthSubject;


    Lecturers[0] = ui->comboBoxFirstLecturer;
    Lecturers[1] = ui->comboBoxSecondLecturer;
    Lecturers[2] = ui->comboBoxThirdLecturer;
    Lecturers[3] = ui->comboBoxFourthLecturer;
    Lecturers[4] = ui->comboBoxFifthLecturer;

    Auditory[0]  = ui->lineEditFirst;
    Auditory[1]  = ui->lineEditSecond;
    Auditory[2]  = ui->lineEditThird;
    Auditory[3]  = ui->lineEditFourth;
    Auditory[4]  = ui->lineEditFifth;

    QSqlQuery *sub = dbHelper.getSubject();
    QSqlQuery *lec = dbHelper.getLecturer();

    if(!sub->first()){ QMessageBox::warning(this, "Помилка", "Ви не ввели жодного предмету"); hide();};
    if(!lec->first()){ QMessageBox::warning(this, "Помилка", "Ви не ввели жодного викладача");hide();};
    for(int i = 0; i < 5; i++){
        do{
            Subjects[i]->addItem(sub->value((int)DatabaseHelper::ColumnsOfSubject::name).toString(),
                                 sub->value((int)DatabaseHelper::ColumnsOfSubject::ID));
            qDebug() << "1";
        }while(sub->next());
        do{
            Lecturers[i]->addItem(lec->value((int)DatabaseHelper::ColumsOfLecturers::name).toString()+ " "
                                  +lec->value((int)DatabaseHelper::ColumsOfLecturers::surname).toString(),
                                 sub->value((int)DatabaseHelper::ColumsOfLecturers::ID));
            qDebug() << "2";

        }while(lec->next());
        sub->first();
        lec->first();

    }


}


void DayInputForm::PushData(){
    for(int i = 0; i < 5;i++){
        dbHelper.addLesson(currentGroup, CurrentDayOfWeek, i, 
                           Subjects[i]->currentData().toInt(), 
                           Lecturers[i]->currentData().toInt(), 
                           Auditory[i]->text());
    }
}


DayInputForm::~DayInputForm()
{
    delete ui;
}
