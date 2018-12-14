#include "scheduledayshowform.h"
#include "ui_scheduledayshowform.h"
#include <QSqlQuery>
ScheduleDayShowForm::ScheduleDayShowForm(int groupId, int DayNumber, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScheduleDayShowForm)
{

    ui->setupUi(this);
    CurrentDay = DayNumber;
    GroupId = groupId;

    ui->DayName->setText(days[DayNumber]);
    QSqlQuery *lessons = dbHelper.getLesson(" grup = "+QString().number(GroupId)+" AND day_of_week = "+QString().number(DayNumber)+" ORDER BY number_of_lesson");
    if (!lessons->first()) return;
      ui->LabelFirstLesson->setText(lessons->value((int)DatabaseHelper::ColumnsOfSchedule::subject).toString()+"\n"
                                    +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::lecturer).toString()+ "      "
                                    +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::classroom).toString());
      lessons->next();
      ui->LabelSecondLesson->setText(lessons->value((int)DatabaseHelper::ColumnsOfSchedule::subject).toString()+"\n"
                                     +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::lecturer).toString()+ "      "
                                     +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::classroom).toString());
      lessons->next();
      ui->LabelThirdLesson->setText(lessons->value((int)DatabaseHelper::ColumnsOfSchedule::subject).toString()+"\n"
                                    +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::lecturer).toString()+ "      "
                                    +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::classroom).toString());
      lessons->next();
      ui->LabelFourthLesson->setText(lessons->value((int)DatabaseHelper::ColumnsOfSchedule::subject).toString()+"\n"
                                     +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::lecturer).toString()+ "      "
                                     +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::classroom).toString());
      lessons->next();
      ui->LabelFifthLesson->setText(lessons->value((int)DatabaseHelper::ColumnsOfSchedule::subject).toString()+"\n"
                                    +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::lecturer).toString()+ "      "
                                    +lessons->value((int)DatabaseHelper::ColumnsOfSchedule::classroom).toString());

}

ScheduleDayShowForm::~ScheduleDayShowForm()
{
    delete ui;
}
