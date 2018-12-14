#include "weekinputform.h"
#include "ui_weekinputform.h"

WeekInputForm::WeekInputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeekInputForm)
{
    ui->setupUi(this);

    QuickAccessPanelItem *panel;
    QString name = "College";
    panel = new QuickAccessPanelItem(name,  QuickAccessPanelItem::Status::college,0, this );
    panel->show();
    ui->QuickAccessConteiner->layout()->addWidget(panel);
    connect(panel, &QuickAccessPanelItem::selected, this, &WeekInputForm::showDaysForms);
    connect(ui->ButtonCansel, &QPushButton::pressed, this, &QWidget::hide);





}
void WeekInputForm::showDaysForms(int groupId){
    for (int i = ui->tabWidget->count(); i > 0; --i) {
       ui->tabWidget->removeTab(0);
    }
    for(int i = 0; i < 5; i++){

        //QMessageBox::warning(this, "ww", "ww");
        //ui->tabWidget->ch
        DayInputForm *d = new DayInputForm(groupId, i, this);

                ui->tabWidget->addTab(d, days[i]);
        connect(ui->ButtonOk, &QPushButton::pressed, d, &DayInputForm::PushData);
    }


}
WeekInputForm::~WeekInputForm()
{
    delete ui;
}
