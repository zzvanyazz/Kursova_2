#ifndef ScheduleMainWindow_H
#define ScheduleMainWindow_H
#include <databasehelper.h>
#include <QMainWindow>
#include <ScheduleForms/quickaccesspanelitem.h>
#include <ScheduleForms/adddatawindow.h>
#include<QDialog>
#include<QStandardItemModel>
#include<QSqlQueryModel>
namespace Ui {
class ScheduleMainWindow;
}

class ScheduleMainWindow : public QMainWindow
{
    Q_OBJECT
    int currentGroup  = 0;



public:
    explicit ScheduleMainWindow(QWidget *parent = nullptr);
    ~ScheduleMainWindow();
private slots:

    void addItemQuickAccessPanel();
    void showAddDataWindow();
    void showTable(int);

    void showWeekInputForm();



private:
     QWidget *w2;
    QList<QuickAccessPanelItem*> QuickAccessItems;
     addDataWindow *w;
    DatabaseHelper dbHelper;
    Ui::ScheduleMainWindow *ui;

};

#endif // ScheduleMainWindow_H
