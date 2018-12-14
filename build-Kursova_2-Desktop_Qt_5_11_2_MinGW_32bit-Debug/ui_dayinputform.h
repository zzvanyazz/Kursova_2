/********************************************************************************
** Form generated from reading UI file 'dayinputform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAYINPUTFORM_H
#define UI_DAYINPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DayInputForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_7;
    QComboBox *comboBoxFirstSubject;
    QLabel *label;
    QComboBox *comboBoxFirstLecturer;
    QLabel *label_8;
    QLineEdit *lineEditFirst;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_9;
    QComboBox *comboBoxSecondSubject;
    QLabel *label_13;
    QComboBox *comboBoxSecondLecturer;
    QLabel *label_17;
    QLineEdit *lineEditSecond;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_10;
    QComboBox *comboBoxThirdSubject;
    QLabel *label_14;
    QComboBox *comboBoxThirdLecturer;
    QLabel *label_18;
    QLineEdit *lineEditThird;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_11;
    QComboBox *comboBoxFourthSubject;
    QLabel *label_15;
    QComboBox *comboBoxFourthLecturer;
    QLabel *label_19;
    QLineEdit *lineEditFourth;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_12;
    QComboBox *comboBoxFifthSubject;
    QLabel *label_16;
    QComboBox *comboBoxFifthLecturer;
    QLabel *label_20;
    QLineEdit *lineEditFifth;

    void setupUi(QWidget *DayInputForm)
    {
        if (DayInputForm->objectName().isEmpty())
            DayInputForm->setObjectName(QStringLiteral("DayInputForm"));
        DayInputForm->resize(535, 317);
        verticalLayout = new QVBoxLayout(DayInputForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(DayInputForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        label_7 = new QLabel(DayInputForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_7);

        comboBoxFirstSubject = new QComboBox(DayInputForm);
        comboBoxFirstSubject->setObjectName(QStringLiteral("comboBoxFirstSubject"));

        horizontalLayout->addWidget(comboBoxFirstSubject);

        label = new QLabel(DayInputForm);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        comboBoxFirstLecturer = new QComboBox(DayInputForm);
        comboBoxFirstLecturer->setObjectName(QStringLiteral("comboBoxFirstLecturer"));

        horizontalLayout->addWidget(comboBoxFirstLecturer);

        label_8 = new QLabel(DayInputForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_8);

        lineEditFirst = new QLineEdit(DayInputForm);
        lineEditFirst->setObjectName(QStringLiteral("lineEditFirst"));

        horizontalLayout->addWidget(lineEditFirst);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(DayInputForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_3);

        label_9 = new QLabel(DayInputForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_9);

        comboBoxSecondSubject = new QComboBox(DayInputForm);
        comboBoxSecondSubject->setObjectName(QStringLiteral("comboBoxSecondSubject"));

        horizontalLayout_2->addWidget(comboBoxSecondSubject);

        label_13 = new QLabel(DayInputForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_13);

        comboBoxSecondLecturer = new QComboBox(DayInputForm);
        comboBoxSecondLecturer->setObjectName(QStringLiteral("comboBoxSecondLecturer"));

        horizontalLayout_2->addWidget(comboBoxSecondLecturer);

        label_17 = new QLabel(DayInputForm);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_17);

        lineEditSecond = new QLineEdit(DayInputForm);
        lineEditSecond->setObjectName(QStringLiteral("lineEditSecond"));

        horizontalLayout_2->addWidget(lineEditSecond);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(DayInputForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_4);

        label_10 = new QLabel(DayInputForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_10);

        comboBoxThirdSubject = new QComboBox(DayInputForm);
        comboBoxThirdSubject->setObjectName(QStringLiteral("comboBoxThirdSubject"));

        horizontalLayout_3->addWidget(comboBoxThirdSubject);

        label_14 = new QLabel(DayInputForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_14);

        comboBoxThirdLecturer = new QComboBox(DayInputForm);
        comboBoxThirdLecturer->setObjectName(QStringLiteral("comboBoxThirdLecturer"));

        horizontalLayout_3->addWidget(comboBoxThirdLecturer);

        label_18 = new QLabel(DayInputForm);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_18);

        lineEditThird = new QLineEdit(DayInputForm);
        lineEditThird->setObjectName(QStringLiteral("lineEditThird"));

        horizontalLayout_3->addWidget(lineEditThird);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(DayInputForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_5);

        label_11 = new QLabel(DayInputForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_11);

        comboBoxFourthSubject = new QComboBox(DayInputForm);
        comboBoxFourthSubject->setObjectName(QStringLiteral("comboBoxFourthSubject"));

        horizontalLayout_4->addWidget(comboBoxFourthSubject);

        label_15 = new QLabel(DayInputForm);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_15);

        comboBoxFourthLecturer = new QComboBox(DayInputForm);
        comboBoxFourthLecturer->setObjectName(QStringLiteral("comboBoxFourthLecturer"));

        horizontalLayout_4->addWidget(comboBoxFourthLecturer);

        label_19 = new QLabel(DayInputForm);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_19);

        lineEditFourth = new QLineEdit(DayInputForm);
        lineEditFourth->setObjectName(QStringLiteral("lineEditFourth"));

        horizontalLayout_4->addWidget(lineEditFourth);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(DayInputForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_6);

        label_12 = new QLabel(DayInputForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_12);

        comboBoxFifthSubject = new QComboBox(DayInputForm);
        comboBoxFifthSubject->setObjectName(QStringLiteral("comboBoxFifthSubject"));

        horizontalLayout_5->addWidget(comboBoxFifthSubject);

        label_16 = new QLabel(DayInputForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_16);

        comboBoxFifthLecturer = new QComboBox(DayInputForm);
        comboBoxFifthLecturer->setObjectName(QStringLiteral("comboBoxFifthLecturer"));

        horizontalLayout_5->addWidget(comboBoxFifthLecturer);

        label_20 = new QLabel(DayInputForm);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_20);

        lineEditFifth = new QLineEdit(DayInputForm);
        lineEditFifth->setObjectName(QStringLiteral("lineEditFifth"));

        horizontalLayout_5->addWidget(lineEditFifth);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(DayInputForm);

        QMetaObject::connectSlotsByName(DayInputForm);
    } // setupUi

    void retranslateUi(QWidget *DayInputForm)
    {
        DayInputForm->setWindowTitle(QApplication::translate("DayInputForm", "Form", nullptr));
        label_2->setText(QApplication::translate("DayInputForm", "1", nullptr));
        label_7->setText(QApplication::translate("DayInputForm", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label->setText(QApplication::translate("DayInputForm", "\320\222\320\270\320\272\320\273\320\260\320\264\320\260\321\207", nullptr));
        label_8->setText(QApplication::translate("DayInputForm", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\321\226\321\217", nullptr));
        label_3->setText(QApplication::translate("DayInputForm", "2", nullptr));
        label_9->setText(QApplication::translate("DayInputForm", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_13->setText(QApplication::translate("DayInputForm", "\320\222\320\270\320\272\320\273\320\260\320\264\320\260\321\207", nullptr));
        label_17->setText(QApplication::translate("DayInputForm", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\321\226\321\217", nullptr));
        label_4->setText(QApplication::translate("DayInputForm", "3", nullptr));
        label_10->setText(QApplication::translate("DayInputForm", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_14->setText(QApplication::translate("DayInputForm", "\320\222\320\270\320\272\320\273\320\260\320\264\320\260\321\207", nullptr));
        label_18->setText(QApplication::translate("DayInputForm", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\321\226\321\217", nullptr));
        label_5->setText(QApplication::translate("DayInputForm", "4", nullptr));
        label_11->setText(QApplication::translate("DayInputForm", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_15->setText(QApplication::translate("DayInputForm", "\320\222\320\270\320\272\320\273\320\260\320\264\320\260\321\207", nullptr));
        label_19->setText(QApplication::translate("DayInputForm", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\321\226\321\217", nullptr));
        label_6->setText(QApplication::translate("DayInputForm", "5", nullptr));
        label_12->setText(QApplication::translate("DayInputForm", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_16->setText(QApplication::translate("DayInputForm", "\320\222\320\270\320\272\320\273\320\260\320\264\320\260\321\207", nullptr));
        label_20->setText(QApplication::translate("DayInputForm", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\321\226\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DayInputForm: public Ui_DayInputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAYINPUTFORM_H
