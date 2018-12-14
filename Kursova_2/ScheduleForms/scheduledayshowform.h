#ifndef SCHEDULEDAYSHOWFORM_H
#define SCHEDULEDAYSHOWFORM_H

#include <QWidget>
#include <databasehelper.h>
namespace Ui {
class ScheduleDayShowForm;
}

class ScheduleDayShowForm : public QWidget
{
    Q_OBJECT
    int GroupId = 0;
    int CurrentDay = 0;
    QString days[5] = {"Понеділок", "Вівторок", "Середа", "Четвер", "П'ятниця"};
public:
    explicit ScheduleDayShowForm(int GroupId, int DayNumber, QWidget *parent = nullptr);
    ~ScheduleDayShowForm();

private:
    DatabaseHelper dbHelper;
    Ui::ScheduleDayShowForm *ui;
};

#endif // SCHEDULEDAYSHOWFORM_H
