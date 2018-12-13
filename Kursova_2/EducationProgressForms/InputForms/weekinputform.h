#ifndef WEEKINPUTFORM_H
#define WEEKINPUTFORM_H

#include <QWidget>

namespace Ui {
class WeekInputForm;
}

class WeekInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit WeekInputForm(QWidget *parent = nullptr);
    ~WeekInputForm();

private:
    Ui::WeekInputForm *ui;
};

#endif // WEEKINPUTFORM_H
