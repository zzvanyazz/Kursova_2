/********************************************************************************
** Form generated from reading UI file 'weekinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEEKINPUTFORM_H
#define UI_WEEKINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeekInputForm
{
public:
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *QuickAccessConteiner;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonOk;
    QPushButton *ButtonCansel;

    void setupUi(QWidget *WeekInputForm)
    {
        if (WeekInputForm->objectName().isEmpty())
            WeekInputForm->setObjectName(QStringLiteral("WeekInputForm"));
        WeekInputForm->resize(847, 534);
        horizontalLayout_7 = new QHBoxLayout(WeekInputForm);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        widget_3 = new QWidget(WeekInputForm);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        QuickAccessConteiner = new QWidget(widget_3);
        QuickAccessConteiner->setObjectName(QStringLiteral("QuickAccessConteiner"));
        horizontalLayout_8 = new QHBoxLayout(QuickAccessConteiner);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        verticalLayout->addWidget(QuickAccessConteiner);

        verticalSpacer = new QSpacerItem(20, 480, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_7->addWidget(widget_3);

        widget_2 = new QWidget(WeekInputForm);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(tabWidget);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ButtonOk = new QPushButton(widget);
        ButtonOk->setObjectName(QStringLiteral("ButtonOk"));

        horizontalLayout_2->addWidget(ButtonOk);

        ButtonCansel = new QPushButton(widget);
        ButtonCansel->setObjectName(QStringLiteral("ButtonCansel"));

        horizontalLayout_2->addWidget(ButtonCansel);


        verticalLayout_2->addWidget(widget);


        horizontalLayout_7->addWidget(widget_2);


        retranslateUi(WeekInputForm);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(WeekInputForm);
    } // setupUi

    void retranslateUi(QWidget *WeekInputForm)
    {
        WeekInputForm->setWindowTitle(QApplication::translate("WeekInputForm", "Form", nullptr));
        ButtonOk->setText(QApplication::translate("WeekInputForm", "\320\236\320\272", nullptr));
        ButtonCansel->setText(QApplication::translate("WeekInputForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeekInputForm: public Ui_WeekInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEEKINPUTFORM_H
