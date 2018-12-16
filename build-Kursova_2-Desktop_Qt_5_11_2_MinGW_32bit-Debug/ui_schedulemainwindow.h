/********************************************************************************
** Form generated from reading UI file 'schedulemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEMAINWINDOW_H
#define UI_SCHEDULEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScheduleMainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *QuickAccessContainer;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SearchLine;
    QPushButton *ButtonAddPanelItem;
    QWidget *QuickAccessPanel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *EducationPregressWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *InfoWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelGrup;
    QLabel *name_grup;
    QLabel *labelCurator;
    QLabel *name_curator;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *FirstConteinerForDays;
    QHBoxLayout *SecondConteinerForDays;
    QWidget *FunctionalPanelConteiner;
    QVBoxLayout *verticalLayout_2;
    QWidget *FunctionalPanel;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ButtonShowAddWindow;
    QPushButton *buttonAddSchedule;
    QPushButton *ButtonShowRepairWindow;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ScheduleMainWindow)
    {
        if (ScheduleMainWindow->objectName().isEmpty())
            ScheduleMainWindow->setObjectName(QStringLiteral("ScheduleMainWindow"));
        ScheduleMainWindow->resize(1018, 558);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScheduleMainWindow->sizePolicy().hasHeightForWidth());
        ScheduleMainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ScheduleMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        QuickAccessContainer = new QWidget();
        QuickAccessContainer->setObjectName(QStringLiteral("QuickAccessContainer"));
        QuickAccessContainer->setGeometry(QRect(0, 0, 221, 484));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(QuickAccessContainer->sizePolicy().hasHeightForWidth());
        QuickAccessContainer->setSizePolicy(sizePolicy2);
        QuickAccessContainer->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(QuickAccessContainer);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(QuickAccessContainer);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        SearchLine = new QLineEdit(widget);
        SearchLine->setObjectName(QStringLiteral("SearchLine"));
        sizePolicy2.setHeightForWidth(SearchLine->sizePolicy().hasHeightForWidth());
        SearchLine->setSizePolicy(sizePolicy2);
        SearchLine->setEchoMode(QLineEdit::Normal);
        SearchLine->setCursorMoveStyle(Qt::LogicalMoveStyle);

        horizontalLayout_2->addWidget(SearchLine);

        ButtonAddPanelItem = new QPushButton(widget);
        ButtonAddPanelItem->setObjectName(QStringLiteral("ButtonAddPanelItem"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ButtonAddPanelItem->sizePolicy().hasHeightForWidth());
        ButtonAddPanelItem->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(ButtonAddPanelItem);


        verticalLayout_3->addWidget(widget);

        QuickAccessPanel = new QWidget(QuickAccessContainer);
        QuickAccessPanel->setObjectName(QStringLiteral("QuickAccessPanel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(QuickAccessPanel->sizePolicy().hasHeightForWidth());
        QuickAccessPanel->setSizePolicy(sizePolicy5);
        verticalLayout = new QVBoxLayout(QuickAccessPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);

        verticalLayout_3->addWidget(QuickAccessPanel);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(QuickAccessContainer);

        horizontalLayout->addWidget(scrollArea);

        EducationPregressWidget = new QWidget(centralwidget);
        EducationPregressWidget->setObjectName(QStringLiteral("EducationPregressWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(10);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(EducationPregressWidget->sizePolicy().hasHeightForWidth());
        EducationPregressWidget->setSizePolicy(sizePolicy6);
        verticalLayout_6 = new QVBoxLayout(EducationPregressWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        InfoWidget = new QWidget(EducationPregressWidget);
        InfoWidget->setObjectName(QStringLiteral("InfoWidget"));
        sizePolicy.setHeightForWidth(InfoWidget->sizePolicy().hasHeightForWidth());
        InfoWidget->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(InfoWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        labelGrup = new QLabel(InfoWidget);
        labelGrup->setObjectName(QStringLiteral("labelGrup"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(labelGrup->sizePolicy().hasHeightForWidth());
        labelGrup->setSizePolicy(sizePolicy7);
        QFont font;
        font.setPointSize(12);
        labelGrup->setFont(font);
        labelGrup->setTextInteractionFlags(Qt::TextEditable);

        horizontalLayout_3->addWidget(labelGrup);

        name_grup = new QLabel(InfoWidget);
        name_grup->setObjectName(QStringLiteral("name_grup"));
        name_grup->setFont(font);

        horizontalLayout_3->addWidget(name_grup);

        labelCurator = new QLabel(InfoWidget);
        labelCurator->setObjectName(QStringLiteral("labelCurator"));
        sizePolicy7.setHeightForWidth(labelCurator->sizePolicy().hasHeightForWidth());
        labelCurator->setSizePolicy(sizePolicy7);
        labelCurator->setFont(font);

        horizontalLayout_3->addWidget(labelCurator);

        name_curator = new QLabel(InfoWidget);
        name_curator->setObjectName(QStringLiteral("name_curator"));
        name_curator->setFont(font);

        horizontalLayout_3->addWidget(name_curator);


        verticalLayout_6->addWidget(InfoWidget);

        widget_2 = new QWidget(EducationPregressWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        FirstConteinerForDays = new QHBoxLayout();
        FirstConteinerForDays->setObjectName(QStringLiteral("FirstConteinerForDays"));

        verticalLayout_5->addLayout(FirstConteinerForDays);

        SecondConteinerForDays = new QHBoxLayout();
        SecondConteinerForDays->setObjectName(QStringLiteral("SecondConteinerForDays"));

        verticalLayout_5->addLayout(SecondConteinerForDays);


        verticalLayout_6->addWidget(widget_2);


        horizontalLayout->addWidget(EducationPregressWidget);

        FunctionalPanelConteiner = new QWidget(centralwidget);
        FunctionalPanelConteiner->setObjectName(QStringLiteral("FunctionalPanelConteiner"));
        sizePolicy1.setHeightForWidth(FunctionalPanelConteiner->sizePolicy().hasHeightForWidth());
        FunctionalPanelConteiner->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(FunctionalPanelConteiner);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        FunctionalPanel = new QWidget(FunctionalPanelConteiner);
        FunctionalPanel->setObjectName(QStringLiteral("FunctionalPanel"));
        verticalLayout_4 = new QVBoxLayout(FunctionalPanel);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        ButtonShowAddWindow = new QPushButton(FunctionalPanel);
        ButtonShowAddWindow->setObjectName(QStringLiteral("ButtonShowAddWindow"));

        verticalLayout_4->addWidget(ButtonShowAddWindow);

        buttonAddSchedule = new QPushButton(FunctionalPanel);
        buttonAddSchedule->setObjectName(QStringLiteral("buttonAddSchedule"));

        verticalLayout_4->addWidget(buttonAddSchedule);

        ButtonShowRepairWindow = new QPushButton(FunctionalPanel);
        ButtonShowRepairWindow->setObjectName(QStringLiteral("ButtonShowRepairWindow"));

        verticalLayout_4->addWidget(ButtonShowRepairWindow);


        verticalLayout_2->addWidget(FunctionalPanel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(FunctionalPanelConteiner);

        ScheduleMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ScheduleMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1018, 25));
        ScheduleMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ScheduleMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ScheduleMainWindow->setStatusBar(statusbar);

        retranslateUi(ScheduleMainWindow);

        QMetaObject::connectSlotsByName(ScheduleMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ScheduleMainWindow)
    {
        ScheduleMainWindow->setWindowTitle(QApplication::translate("ScheduleMainWindow", "MainWindow", nullptr));
        ButtonAddPanelItem->setText(QApplication::translate("ScheduleMainWindow", "+", nullptr));
        labelGrup->setText(QApplication::translate("ScheduleMainWindow", "\320\223\321\200\321\203\320\277\320\260:", nullptr));
        name_grup->setText(QString());
        labelCurator->setText(QApplication::translate("ScheduleMainWindow", "\320\232\321\203\321\200\320\260\321\202\320\276\321\200:", nullptr));
        name_curator->setText(QString());
        ButtonShowAddWindow->setText(QApplication::translate("ScheduleMainWindow", "+", nullptr));
        buttonAddSchedule->setText(QApplication::translate("ScheduleMainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\200\320\276\320\267\320\272\320\273\320\260\320\264", nullptr));
        ButtonShowRepairWindow->setText(QApplication::translate("ScheduleMainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScheduleMainWindow: public Ui_ScheduleMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEMAINWINDOW_H
