/********************************************************************************
** Form generated from reading UI file 'lecturerrepairform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTURERREPAIRFORM_H
#define UI_LECTURERREPAIRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecturerRepairForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QFontComboBox *findComboBox;
    QPushButton *ButtonDelete;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lectureSurname;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lectureName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lectureLastName;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QWidget *LecturerRepairForm)
    {
        if (LecturerRepairForm->objectName().isEmpty())
            LecturerRepairForm->setObjectName(QStringLiteral("LecturerRepairForm"));
        LecturerRepairForm->resize(400, 300);
        LecturerRepairForm->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0.034, stop:0.475962 rgba(0, 0, 0, 255), stop:1 rgba(0, 72, 65, 255));"));
        verticalLayout = new QVBoxLayout(LecturerRepairForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(LecturerRepairForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        findComboBox = new QFontComboBox(widget);
        findComboBox->setObjectName(QStringLiteral("findComboBox"));

        horizontalLayout_5->addWidget(findComboBox);

        ButtonDelete = new QPushButton(widget);
        ButtonDelete->setObjectName(QStringLiteral("ButtonDelete"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonDelete->sizePolicy().hasHeightForWidth());
        ButtonDelete->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(ButtonDelete);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(LecturerRepairForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lectureSurname = new QLineEdit(LecturerRepairForm);
        lectureSurname->setObjectName(QStringLiteral("lectureSurname"));

        horizontalLayout_2->addWidget(lectureSurname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(LecturerRepairForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lectureName = new QLineEdit(LecturerRepairForm);
        lectureName->setObjectName(QStringLiteral("lectureName"));

        horizontalLayout->addWidget(lectureName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(LecturerRepairForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lectureLastName = new QLineEdit(LecturerRepairForm);
        lectureLastName->setObjectName(QStringLiteral("lectureLastName"));

        horizontalLayout_3->addWidget(lectureLastName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_ok = new QPushButton(LecturerRepairForm);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_4->addWidget(btn_ok);

        btn_cancel = new QPushButton(LecturerRepairForm);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_4->addWidget(btn_cancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(LecturerRepairForm);

        QMetaObject::connectSlotsByName(LecturerRepairForm);
    } // setupUi

    void retranslateUi(QWidget *LecturerRepairForm)
    {
        LecturerRepairForm->setWindowTitle(QApplication::translate("LecturerRepairForm", "Form", nullptr));
        ButtonDelete->setText(QApplication::translate("LecturerRepairForm", "-", nullptr));
        label->setText(QApplication::translate("LecturerRepairForm", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        label_3->setText(QApplication::translate("LecturerRepairForm", "\320\206\320\274'\321\217", nullptr));
        lectureName->setText(QString());
        label_2->setText(QApplication::translate("LecturerRepairForm", "\320\237\320\276 \320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", nullptr));
        btn_ok->setText(QApplication::translate("LecturerRepairForm", "\320\236\320\232", nullptr));
        btn_cancel->setText(QApplication::translate("LecturerRepairForm", "\320\222\321\226\320\264\320\274\321\226\320\275\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecturerRepairForm: public Ui_LecturerRepairForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTURERREPAIRFORM_H
