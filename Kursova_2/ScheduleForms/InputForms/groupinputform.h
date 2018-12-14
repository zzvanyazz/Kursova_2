#ifndef GROUPINPUTFORM_H
#define GROUPINPUTFORM_H

#include <QWidget>
#include <databasehelper.h>
namespace Ui {
class GroupInputForm;
}

class GroupInputForm : public QWidget
{
    Q_OBJECT

public:
    explicit GroupInputForm(QWidget *parent = nullptr);
    ~GroupInputForm();
private slots:
    void completed();
    void cancel();

private:
    DatabaseHelper dbHelper;
    Ui::GroupInputForm *ui;
};

#endif // GROUPINPUTFORM_H
