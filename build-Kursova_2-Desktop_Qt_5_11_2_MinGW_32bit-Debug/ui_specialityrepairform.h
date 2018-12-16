/********************************************************************************
** Form generated from reading UI file 'specialityrepairform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALITYREPAIRFORM_H
#define UI_SPECIALITYREPAIRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpecialityRepairForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *findComboBox;
    QPushButton *ButtonDelete;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxDepartments;
    QLineEdit *lineEditInput;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonOk;
    QPushButton *ButtonCancel;

    void setupUi(QWidget *SpecialityRepairForm)
    {
        if (SpecialityRepairForm->objectName().isEmpty())
            SpecialityRepairForm->setObjectName(QStringLiteral("SpecialityRepairForm"));
        SpecialityRepairForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(SpecialityRepairForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(SpecialityRepairForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        findComboBox = new QFontComboBox(widget);
        findComboBox->setObjectName(QStringLiteral("findComboBox"));

        horizontalLayout->addWidget(findComboBox);

        ButtonDelete = new QPushButton(widget);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonDelete->sizePolicy().hasHeightForWidth());
        ButtonDelete->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ButtonDelete);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(SpecialityRepairForm);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBoxDepartments = new QComboBox(widget_2);
        comboBoxDepartments->setObjectName(QStringLiteral("comboBoxDepartments"));

        horizontalLayout_3->addWidget(comboBoxDepartments);

        lineEditInput = new QLineEdit(widget_2);
        lineEditInput->setObjectName(QStringLiteral("lineEditInput"));

        horizontalLayout_3->addWidget(lineEditInput);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(SpecialityRepairForm);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(207, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ButtonOk = new QPushButton(widget_3);
        ButtonOk->setObjectName(QStringLiteral("ButtonOk"));

        horizontalLayout_2->addWidget(ButtonOk);

        ButtonCancel = new QPushButton(widget_3);
        ButtonCancel->setObjectName(QStringLiteral("ButtonCancel"));

        horizontalLayout_2->addWidget(ButtonCancel);


        verticalLayout->addWidget(widget_3);


        retranslateUi(SpecialityRepairForm);

        QMetaObject::connectSlotsByName(SpecialityRepairForm);
    } // setupUi

    void retranslateUi(QWidget *SpecialityRepairForm)
    {
        SpecialityRepairForm->setWindowTitle(QApplication::translate("SpecialityRepairForm", "Form", nullptr));
        ButtonDelete->setText(QApplication::translate("SpecialityRepairForm", "-", nullptr));
        ButtonOk->setText(QApplication::translate("SpecialityRepairForm", "\320\236\320\272", nullptr));
        ButtonCancel->setText(QApplication::translate("SpecialityRepairForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecialityRepairForm: public Ui_SpecialityRepairForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALITYREPAIRFORM_H
