/********************************************************************************
** Form generated from reading UI file 'insertdata.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDATA_H
#define UI_INSERTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertData
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_back;
    QLabel *label;
    QTextEdit *textEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *InsertData)
    {
        if (InsertData->objectName().isEmpty())
            InsertData->setObjectName(QString::fromUtf8("InsertData"));
        InsertData->resize(938, 532);
        centralwidget = new QWidget(InsertData);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(820, 10, 83, 29));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 25, 151, 41));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(190, 30, 321, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 100, 551, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_4->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_5->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_5->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_5);

        InsertData->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        label->setBuddy(textEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(InsertData);

        QMetaObject::connectSlotsByName(InsertData);
    } // setupUi

    void retranslateUi(QMainWindow *InsertData)
    {
        InsertData->setWindowTitle(QCoreApplication::translate("InsertData", "InsertData", nullptr));
        pushButton_back->setText(QCoreApplication::translate("InsertData", "back", nullptr));
        label->setText(QCoreApplication::translate("InsertData", "Enter Dataset Name :- ", nullptr));
        pushButton->setText(QCoreApplication::translate("InsertData", "+ Add Instructors", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InsertData", "View Instructors", nullptr));
        pushButton_4->setText(QCoreApplication::translate("InsertData", "+ Add Course", nullptr));
        pushButton_3->setText(QCoreApplication::translate("InsertData", "View Courses", nullptr));
        pushButton_6->setText(QCoreApplication::translate("InsertData", "+ Add Department", nullptr));
        pushButton_5->setText(QCoreApplication::translate("InsertData", "View Departments", nullptr));
        pushButton_8->setText(QCoreApplication::translate("InsertData", "+ Add Rooms", nullptr));
        pushButton_7->setText(QCoreApplication::translate("InsertData", "View Rooms", nullptr));
        pushButton_10->setText(QCoreApplication::translate("InsertData", "+ Add ClassTime", nullptr));
        pushButton_9->setText(QCoreApplication::translate("InsertData", "View ClassTimes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertData: public Ui_InsertData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTDATA_H
