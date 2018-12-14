/********************************************************************************
** Form generated from reading UI file 'scheduledayshowform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEDAYSHOWFORM_H
#define UI_SCHEDULEDAYSHOWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScheduleDayShowForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *DayName;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QLabel *LabelFirstLesson;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_2;
    QLabel *LabelSecondLesson;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_3;
    QLabel *LabelThirdLesson;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_4;
    QLabel *LabelFourthLesson;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_5;
    QLabel *LabelFifthLesson;

    void setupUi(QWidget *ScheduleDayShowForm)
    {
        if (ScheduleDayShowForm->objectName().isEmpty())
            ScheduleDayShowForm->setObjectName(QStringLiteral("ScheduleDayShowForm"));
        ScheduleDayShowForm->resize(472, 336);
        ScheduleDayShowForm->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(80, 80, 80, 255), stop:0.640449 rgba(255, 255, 255, 255));"));
        verticalLayout = new QVBoxLayout(ScheduleDayShowForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DayName = new QLabel(ScheduleDayShowForm);
        DayName->setObjectName(QStringLiteral("DayName"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DayName->sizePolicy().hasHeightForWidth());
        DayName->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(DayName, 0, Qt::AlignHCenter);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label = new QLabel(ScheduleDayShowForm);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_14->addWidget(label);

        LabelFirstLesson = new QLabel(ScheduleDayShowForm);
        LabelFirstLesson->setObjectName(QStringLiteral("LabelFirstLesson"));

        horizontalLayout_14->addWidget(LabelFirstLesson);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_2 = new QLabel(ScheduleDayShowForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        horizontalLayout_15->addWidget(label_2);

        LabelSecondLesson = new QLabel(ScheduleDayShowForm);
        LabelSecondLesson->setObjectName(QStringLiteral("LabelSecondLesson"));

        horizontalLayout_15->addWidget(LabelSecondLesson);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_3 = new QLabel(ScheduleDayShowForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout_16->addWidget(label_3);

        LabelThirdLesson = new QLabel(ScheduleDayShowForm);
        LabelThirdLesson->setObjectName(QStringLiteral("LabelThirdLesson"));

        horizontalLayout_16->addWidget(LabelThirdLesson);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_4 = new QLabel(ScheduleDayShowForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        horizontalLayout_17->addWidget(label_4);

        LabelFourthLesson = new QLabel(ScheduleDayShowForm);
        LabelFourthLesson->setObjectName(QStringLiteral("LabelFourthLesson"));

        horizontalLayout_17->addWidget(LabelFourthLesson);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_5 = new QLabel(ScheduleDayShowForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        horizontalLayout_18->addWidget(label_5);

        LabelFifthLesson = new QLabel(ScheduleDayShowForm);
        LabelFifthLesson->setObjectName(QStringLiteral("LabelFifthLesson"));

        horizontalLayout_18->addWidget(LabelFifthLesson);


        verticalLayout->addLayout(horizontalLayout_18);


        retranslateUi(ScheduleDayShowForm);

        QMetaObject::connectSlotsByName(ScheduleDayShowForm);
    } // setupUi

    void retranslateUi(QWidget *ScheduleDayShowForm)
    {
        ScheduleDayShowForm->setWindowTitle(QApplication::translate("ScheduleDayShowForm", "Form", nullptr));
        DayName->setText(QString());
        label->setText(QApplication::translate("ScheduleDayShowForm", "1", nullptr));
        LabelFirstLesson->setText(QString());
        label_2->setText(QApplication::translate("ScheduleDayShowForm", "2", nullptr));
        LabelSecondLesson->setText(QString());
        label_3->setText(QApplication::translate("ScheduleDayShowForm", "3", nullptr));
        LabelThirdLesson->setText(QString());
        label_4->setText(QApplication::translate("ScheduleDayShowForm", "4", nullptr));
        LabelFourthLesson->setText(QString());
        label_5->setText(QApplication::translate("ScheduleDayShowForm", "5", nullptr));
        LabelFifthLesson->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScheduleDayShowForm: public Ui_ScheduleDayShowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEDAYSHOWFORM_H
