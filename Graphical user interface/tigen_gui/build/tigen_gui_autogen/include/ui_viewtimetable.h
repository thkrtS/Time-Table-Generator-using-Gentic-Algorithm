/********************************************************************************
** Form generated from reading UI file 'viewtimetable.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTIMETABLE_H
#define UI_VIEWTIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewTimetable
{
public:
    QPushButton *pushButton_back;
    QPushButton *pushButton_vr;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *ViewTimetable)
    {
        if (ViewTimetable->objectName().isEmpty())
            ViewTimetable->setObjectName(QString::fromUtf8("ViewTimetable"));
        ViewTimetable->resize(938, 532);
        pushButton_back = new QPushButton(ViewTimetable);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(810, 20, 83, 29));
        pushButton_vr = new QPushButton(ViewTimetable);
        pushButton_vr->setObjectName(QString::fromUtf8("pushButton_vr"));
        pushButton_vr->setGeometry(QRect(380, 460, 211, 41));
        groupBox = new QGroupBox(ViewTimetable);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 60, 421, 311));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 231, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);


        retranslateUi(ViewTimetable);

        QMetaObject::connectSlotsByName(ViewTimetable);
    } // setupUi

    void retranslateUi(QWidget *ViewTimetable)
    {
        ViewTimetable->setWindowTitle(QCoreApplication::translate("ViewTimetable", "ViewTImetable", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ViewTimetable", "back", nullptr));
        pushButton_vr->setText(QCoreApplication::translate("ViewTimetable", "View Result", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ViewTimetable", "Select Timetable to view : ", nullptr));
        radioButton->setText(QCoreApplication::translate("ViewTimetable", "1st year", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ViewTimetable", "2nd year", nullptr));
        radioButton_3->setText(QCoreApplication::translate("ViewTimetable", "3rd year", nullptr));
        radioButton_4->setText(QCoreApplication::translate("ViewTimetable", "4th year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewTimetable: public Ui_ViewTimetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTIMETABLE_H
