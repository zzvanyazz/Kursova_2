#ifndef WEEKINPUTFORM_H
#define WEEKINPUTFORM_H

#include <QWidget>
#include <ScheduleForms/InputForms/dayinputform.h>
#include <ScheduleForms/quickaccesspanelitem.h>
namespace Ui {
class WeekInputForm;
}

class WeekInputForm : public QWidget
{

    QString days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    Q_OBJECT
    DayInputForm* weekForms[5];

public:
    explicit WeekInputForm(QWidget *parent = nullptr);
    ~WeekInputForm();
private slots:
void showDaysForms(int);

private:

    
    Ui::WeekInputForm *ui;
};

#endif // WEEKINPUTFORM_H