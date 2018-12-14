#ifndef DAYINPUTFORM_H
#define DAYINPUTFORM_H

#include <QWidget>
#include <QtWidgets>
#include <databasehelper.h>
namespace Ui {
class DayInputForm;
}

class DayInputForm : public QWidget
{
    Q_OBJECT


public:
    explicit DayInputForm(int, QWidget *parent = nullptr);
    ~DayInputForm();
public slots:
    void PushData();

private:
    QComboBox* Subjects[5];
    QComboBox* Lecturers[5];
    QLineEdit* Auditory[5];
    int CurrentDayOfWeek = 0;
    int currentGroup = 0;
    DatabaseHelper dbHelper;
    Ui::DayInputForm *ui;
};

#endif // DAYINPUTFORM_H
