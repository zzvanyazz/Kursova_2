/********************************************************************************
** Form generated from reading UI file 'studentrepairform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTREPAIRFORM_H
#define UI_STUDENTREPAIRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_StudentRepairForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QFontComboBox *findComboBox;
    QPushButton *ButtonDelete;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *studentSurname;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *studentName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *studentLastName;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *studyTypeCheck;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *StudentRepairForm)
    {
        if (StudentRepairForm->objectName().isEmpty())
            StudentRepairForm->setObjectName(QStringLiteral("StudentRepairForm"));
        StudentRepairForm->resize(440, 383);
        StudentRepairForm->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.365385 rgba(0, 0, 0, 255), stop:1 rgba(53, 35, 5, 255));"));
        verticalLayout = new QVBoxLayout(StudentRepairForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(StudentRepairForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(1, 1, 1, 1);
        findComboBox = new QFontComboBox(widget);
        findComboBox->setObjectName(QStringLiteral("findComboBox"));

        horizontalLayout_9->addWidget(findComboBox);

        ButtonDelete = new QPushButton(widget);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonDelete->sizePolicy().hasHeightForWidth());
        ButtonDelete->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(ButtonDelete);


        verticalLayout->addWidget(widget);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(StudentRepairForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        studentSurname = new QLineEdit(StudentRepairForm);
        studentSurname->setObjectName(QStringLiteral("studentSurname"));

        horizontalLayout_6->addWidget(studentSurname);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(StudentRepairForm);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        studentName = new QLineEdit(StudentRepairForm);
        studentName->setObjectName(QStringLiteral("studentName"));

        horizontalLayout_5->addWidget(studentName);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(StudentRepairForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        studentLastName = new QLineEdit(StudentRepairForm);
        studentLastName->setObjectName(QStringLiteral("studentLastName"));

        horizontalLayout_3->addWidget(studentLastName);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(StudentRepairForm);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        comboBox = new QComboBox(StudentRepairForm);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        studyTypeCheck = new QCheckBox(StudentRepairForm);
        studyTypeCheck->setObjectName(QStringLiteral("studyTypeCheck"));

        horizontalLayout->addWidget(studyTypeCheck);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_8);

        widget1 = new QWidget(StudentRepairForm);
        widget1->setObjectName(QStringLiteral("widget1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget1->sizePolicy().hasHeightForWidth());
        widget1->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_ok = new QPushButton(widget1);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_4->addWidget(btn_ok);

        btn_cancel = new QPushButton(widget1);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_4->addWidget(btn_cancel);


        verticalLayout->addWidget(widget1);


        retranslateUi(StudentRepairForm);

        QMetaObject::connectSlotsByName(StudentRepairForm);
    } // setupUi

    void retranslateUi(QWidget *StudentRepairForm)
    {
        StudentRepairForm->setWindowTitle(QApplication::translate("StudentRepairForm", "Form", nullptr));
        ButtonDelete->setText(QApplication::translate("StudentRepairForm", "-", nullptr));
        label_3->setText(QApplication::translate("StudentRepairForm", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        label_4->setText(QApplication::translate("StudentRepairForm", "\320\206\320\274'\321\217", nullptr));
        label->setText(QApplication::translate("StudentRepairForm", "\320\237\320\276 \320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", nullptr));
        label_5->setText(QApplication::translate("StudentRepairForm", "\320\223\321\200\321\203\320\277\320\260", nullptr));
        studyTypeCheck->setText(QApplication::translate("StudentRepairForm", "\320\224\320\265\321\200\320\266\320\260\320\262\320\275\320\260 \321\204\320\276\321\200\320\274\320\260 \320\275\320\260\320\262\321\207\320\260\320\275\320\275\321\217", nullptr));
        btn_ok->setText(QApplication::translate("StudentRepairForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("StudentRepairForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentRepairForm: public Ui_StudentRepairForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTREPAIRFORM_H
