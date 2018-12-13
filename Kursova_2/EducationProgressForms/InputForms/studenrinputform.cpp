#include "studenrinputform.h"
#include "ui_studenrinputform.h"
#include<QtWidgets>
#include <EducationProgressForms/adddatawindow.h>
StudenrInputForm::StudenrInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudenrInputForm)
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(pressed()),this,SLOT(completed()));
    connect(ui->btn_cancel,SIGNAL(pressed()),this,SLOT(cancel()));
    QSqlQuery *groupQuery = dbHelper.getGroup();
    int i = 0;
    if(groupQuery->first()){
        do{

            //ui->boxDepartment->addItem(q->value((int)DatabaseHelper::ColumnsOfDepartment::name).toString());
            ui->comboBox->addItem(groupQuery->value((int)DatabaseHelper::ColumnsOfGroup::number).toString(),groupQuery->value((int)DatabaseHelper::ColumnsOfGroup::ID));

        }while(groupQuery->next());
    }else {
        QMessageBox::warning(this, "Помилка" , "Ви не ввели жодної групи");
        ((QMainWindow*)parent)->hide();
        addDataWindow *w = new addDataWindow();
        w->show();
        return;

    }


}

StudenrInputForm::~StudenrInputForm()
{
    delete ui;
}
void StudenrInputForm::completed(){
    if(ui->studentSurname->text().isEmpty() ){
        QMessageBox::warning(this, "Помилка", "Введіть прізвище студента ");
        return;
    }else if(ui->studentName->text().isEmpty()){
        QMessageBox::warning(this, "Помилка", "Введіть ім'я студента");
        return;
    }
    else if(ui->studentLastName->text().isEmpty()){
            QMessageBox::warning(this, "Помилка", "Введіть по батькові студента");
            return;
        }
    dbHelper.addStudent(
                ui->comboBox->itemData(ui->comboBox->currentIndex()).toInt(),
                ui->studentName->text(),
                ui->studentSurname->text(),
                ui->studentLastName->text(),
                ui->studyTypeCheck->isChecked()
                );
    if(ui->spinBox->value() == 1) cancel();
    ui->spinBox->setValue(ui->spinBox->value()-1);
    ui->studentName->clear();
    ui->studentLastName->clear();
    ui->studentSurname->clear();


}
void StudenrInputForm::cancel(){
     ((QMainWindow*)((QWidget*)parent())->parent())->hide();
}
