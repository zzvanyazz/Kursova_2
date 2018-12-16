/********************************************************************************
** Form generated from reading UI file 'grouprepairform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPREPAIRFORM_H
#define UI_GROUPREPAIRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupRepairForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_7;
    QFontComboBox *findComboBox;
    QPushButton *ButtonDelete;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *groupNumber;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *boxSpesiality;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QComboBox *boxCurator;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *groupName;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *GroupRepairForm)
    {
        if (GroupRepairForm->objectName().isEmpty())
            GroupRepairForm->setObjectName(QStringLiteral("GroupRepairForm"));
        GroupRepairForm->resize(400, 300);
        GroupRepairForm->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(5, 61, 8, 255));"));
        verticalLayout = new QVBoxLayout(GroupRepairForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalWidget = new QWidget(GroupRepairForm);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalLayout_7 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_7->setSpacing(99);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        findComboBox = new QFontComboBox(horizontalWidget);
        findComboBox->setObjectName(QStringLiteral("findComboBox"));

        horizontalLayout_7->addWidget(findComboBox);

        ButtonDelete = new QPushButton(horizontalWidget);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonDelete->sizePolicy().hasHeightForWidth());
        ButtonDelete->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(ButtonDelete);


        verticalLayout->addWidget(horizontalWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(GroupRepairForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        groupNumber = new QLineEdit(GroupRepairForm);
        groupNumber->setObjectName(QStringLiteral("groupNumber"));

        horizontalLayout_3->addWidget(groupNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(GroupRepairForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        boxSpesiality = new QComboBox(GroupRepairForm);
        boxSpesiality->setObjectName(QStringLiteral("boxSpesiality"));

        horizontalLayout_2->addWidget(boxSpesiality);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(GroupRepairForm);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        boxCurator = new QComboBox(GroupRepairForm);
        boxCurator->setObjectName(QStringLiteral("boxCurator"));

        horizontalLayout_6->addWidget(boxCurator);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(GroupRepairForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        groupName = new QLineEdit(GroupRepairForm);
        groupName->setObjectName(QStringLiteral("groupName"));

        horizontalLayout_5->addWidget(groupName);


        verticalLayout->addLayout(horizontalLayout_5);

        widget = new QWidget(GroupRepairForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);


        verticalLayout->addWidget(widget);


        retranslateUi(GroupRepairForm);

        QMetaObject::connectSlotsByName(GroupRepairForm);
    } // setupUi

    void retranslateUi(QWidget *GroupRepairForm)
    {
        GroupRepairForm->setWindowTitle(QApplication::translate("GroupRepairForm", "Form", nullptr));
        ButtonDelete->setText(QApplication::translate("GroupRepairForm", "-", nullptr));
        label->setText(QApplication::translate("GroupRepairForm", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\270", nullptr));
        label_2->setText(QApplication::translate("GroupRepairForm", "\320\241\320\277\320\265\321\206\321\226\320\260\320\273\321\214\320\275\321\226\321\201\321\202\321\214", nullptr));
        label_4->setText(QApplication::translate("GroupRepairForm", "\320\232\321\203\321\200\320\260\321\202\320\276\321\200", nullptr));
        label_3->setText(QApplication::translate("GroupRepairForm", "\320\235\320\260\320\267\320\262\320\260 \320\263\321\200\321\203\320\277\320\270", nullptr));
        btn_ok->setText(QApplication::translate("GroupRepairForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("GroupRepairForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupRepairForm: public Ui_GroupRepairForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPREPAIRFORM_H
