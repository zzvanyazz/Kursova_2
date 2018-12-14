#include "markinputform.h"
#include "ui_markinputform.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
MarkInputForm::MarkInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarkInputForm)
{
    ui->setupUi(this);
    panel = new QuickAccessPanelItem("College",  QuickAccessPanelItem::Status::college,0, ui->QuicAccessPanelItem );
    connect(ui->buttonOk, &QPushButton::pressed, this, &MarkInputForm::completed);
    connect(ui->ButtonCancel, &QPushButton::pressed, this, &MarkInputForm::completed);
    connect(panel,&QuickAccessPanelItem::selected,this,&MarkInputForm::groupSelected);
    ui->QuicAccessPanelItem->layout()->addWidget(panel);
    //connect(ui->GroupConboBox,&QComboBox::changeEvent,this,&MarkInputForm::)
    QSqlQuery *groupQuery = dbHelper.getGroup();
    QSqlQuery *studentQuery =dbHelper.getStudent();
    int i = 0;
    if(groupQuery->first()){
        do{

            //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            //ui->GroupConboBox->addItem(groupQuery->value((int)DatabaseHelper::ColumnsOfGroup::number).toString(), groupQuery->value((int)DatabaseHelper::ColumnsOfGroup::ID ));
        }while(groupQuery->next());
    }
    if(studentQuery->first()){
        do{

            //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            //ui->SudentConboBox->addItem(studentQuery->value((int)DatabaseHelper::ColumnsOfStudent::surname).toString(),studentQuery->value((int)DatabaseHelper::ColumnsOfStudent::ID));
        }while(studentQuery->next());
    }else {
        QMessageBox::warning(this, "Помилка" , "Ви не ввели жодної групи");
        ((QMainWindow*)parent)->hide();
        addDataWindow *w = new addDataWindow();
        w->show();
        return;

    }



    //QSqlQuery departments = dbHelper.get
}

MarkInputForm::~MarkInputForm()
{
    delete ui;
}
void MarkInputForm::groupSelected(int id){
    currentGroup = id;
    QSqlQuery*  subjects = new QSqlQuery(dbHelper.db);
    subjects->exec("SELECT DISTINCT subject FROM education_progress WHERE \"group\"="+QString().number(id)+";");
    QSqlQuery *student = dbHelper.getStudent("grup = "+QString().number(id));
    ui->studentscomboBox->clear();
    if(student->first()){
        do{

            ui->studentscomboBox->addItem( student->value((int)DatabaseHelper::ColumnsOfStudent::surname).toString()+ " "
                                   +student->value((int)DatabaseHelper::ColumnsOfStudent::name).toString(),
                                   student->value((int)DatabaseHelper::ColumnsOfStudent::ID));


        }while(student->next());

    }
    for(QPair<QLineEdit*, int> e:lines){
        e.first->parentWidget()->hide();

        delete e.first->parentWidget();

    }
    lines.clear();
    if(subjects->first()){
        do{

            QWidget *w = new QWidget();
            QHBoxLayout *p=new QHBoxLayout();
            QLabel *text=new QLabel();
            QLineEdit *line = new QLineEdit(w);
            line->setValidator( new QIntValidator);
            lines.push_back(QPair<QLineEdit*, int>(line, subjects->value(0).toInt()));
            QSqlQuery *sub = dbHelper.getSubject("ID = " + subjects->value(0).toString());
            sub->first();

            text->setText(sub->value((int)DatabaseHelper::ColumnsOfSubject::name).toString());

            p->addWidget(text);
            p->addWidget(line);
            w->setLayout(p);
            ui->scrollAreaWidgetContents->layout()->addWidget(w);
        }while(subjects->next());
    }else{}
}

void MarkInputForm::completed(){
    for(QPair<QLineEdit*, int> l : lines){
        if(!l.first->text().isEmpty()){
            dbHelper.addMark(ui->studentscomboBox->currentData().toInt(), currentGroup, ui->comboBoxSemester->currentIndex(), l.second, l.first->text().toInt());
        }
    }
}
