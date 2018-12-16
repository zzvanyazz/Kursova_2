/********************************************************************************
** Form generated from reading UI file 'subjectrepairform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTREPAIRFORM_H
#define UI_SUBJECTREPAIRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectRepairForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *findComboBox;
    QPushButton *ButtonDelete;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditInput;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonOk;
    QPushButton *ButtonCancel;

    void setupUi(QWidget *SubjectRepairForm)
    {
        if (SubjectRepairForm->objectName().isEmpty())
            SubjectRepairForm->setObjectName(QStringLiteral("SubjectRepairForm"));
        SubjectRepairForm->resize(359, 218);
        verticalLayout = new QVBoxLayout(SubjectRepairForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(SubjectRepairForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
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

        widget_2 = new QWidget(SubjectRepairForm);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEditInput = new QLineEdit(widget_2);
        lineEditInput->setObjectName(QStringLiteral("lineEditInput"));

        verticalLayout_2->addWidget(lineEditInput);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(SubjectRepairForm);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ButtonOk = new QPushButton(widget_3);
        ButtonOk->setObjectName(QStringLiteral("ButtonOk"));

        horizontalLayout_2->addWidget(ButtonOk);

        ButtonCancel = new QPushButton(widget_3);
        ButtonCancel->setObjectName(QStringLiteral("ButtonCancel"));

        horizontalLayout_2->addWidget(ButtonCancel);


        verticalLayout->addWidget(widget_3);


        retranslateUi(SubjectRepairForm);

        QMetaObject::connectSlotsByName(SubjectRepairForm);
    } // setupUi

    void retranslateUi(QWidget *SubjectRepairForm)
    {
        SubjectRepairForm->setWindowTitle(QApplication::translate("SubjectRepairForm", "Form", nullptr));
        ButtonDelete->setText(QApplication::translate("SubjectRepairForm", "-", nullptr));
        ButtonOk->setText(QApplication::translate("SubjectRepairForm", "\320\236\320\272", nullptr));
        ButtonCancel->setText(QApplication::translate("SubjectRepairForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubjectRepairForm: public Ui_SubjectRepairForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTREPAIRFORM_H
