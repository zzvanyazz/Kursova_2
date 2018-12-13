#include "weekinputform.h"
#include "ui_weekinputform.h"

WeekInputForm::WeekInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeekInputForm)
{
    ui->setupUi(this);
}

WeekInputForm::~WeekInputForm()
{
    delete ui;
}
