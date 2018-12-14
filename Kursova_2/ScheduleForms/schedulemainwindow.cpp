#include "schedulemainwindow.h"
#include "ui_schedulemainwindow.h"
#include <QtWidgets>
#include <databasehelper.h>
#include <ScheduleForms/quickaccesspanelitem.h>
#include <ScheduleForms/adddatawindow.h>
#include <ScheduleForms/InputForms/weekinputform.h>
#include <ScheduleForms/scheduledayshowform.h>

ScheduleMainWindow::ScheduleMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScheduleMainWindow)
{

    ui->setupUi(this);

    connect(ui->ButtonAddPanelItem, SIGNAL (pressed()),this, SLOT (addItemQuickAccessPanel()));
    connect(ui->ButtonShowAddWindow, SIGNAL (pressed()),this, SLOT (showAddDataWindow()));
    connect(ui->buttonAddSchedule, SIGNAL (pressed()),this, SLOT (showWeekInputForm()));

    w2 = new QWidget(this);


}




void ScheduleMainWindow::addItemQuickAccessPanel(){
    QuickAccessPanelItem *d;
    QString name = "College";
    d = new QuickAccessPanelItem(name,  QuickAccessPanelItem::Status::college,0, this );
    ui->QuickAccessPanel->layout()->addWidget(d);
    QuickAccessItems.append(d);
    connect(d, &QuickAccessPanelItem::selected, this, &ScheduleMainWindow::showTable);

}
void ScheduleMainWindow::showAddDataWindow(){
    addDataWindow *w = new addDataWindow(this);
    w->show();
    for(QuickAccessPanelItem *Item: QuickAccessItems){
        connect(w, SIGNAL( closeEvent(QCloseEvent*)), Item, SLOT(Reload()));
    }



}


void ScheduleMainWindow::showTable(int GroupID){

    for(ScheduleDayShowForm *s: days){
        s->hide();
    }

    ScheduleDayShowForm *monday = new  ScheduleDayShowForm(GroupID, 0);
    ui->FirstConteinerForDays->addWidget(monday);
    ScheduleDayShowForm *tuesday = new  ScheduleDayShowForm(GroupID, 1);
    ui->FirstConteinerForDays->addWidget(tuesday);
    ScheduleDayShowForm *wednesday = new  ScheduleDayShowForm(GroupID, 2);
    ui->FirstConteinerForDays->addWidget(wednesday);
    ScheduleDayShowForm *thursday = new  ScheduleDayShowForm(GroupID, 3);
    ui->SecondConteinerForDays->addWidget(thursday);
    ScheduleDayShowForm *friday = new  ScheduleDayShowForm(GroupID, 4);
    ui->SecondConteinerForDays->addWidget(friday);

    days.push_back(monday);
    days.push_back(tuesday);
    days.push_back(wednesday);
    days.push_back(thursday);
    days.push_back(friday);
}





void ScheduleMainWindow::showWeekInputForm(){
    WeekInputForm *w = new WeekInputForm;
    w->setWindowTitle("Введіть розклад");
    w->show();
}



ScheduleMainWindow::~ScheduleMainWindow()
{
    delete ui;
}
