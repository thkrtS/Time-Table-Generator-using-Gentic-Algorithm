/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_vtt;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_id;
    QPushButton *pushButton_ad;
    QPushButton *pushButton_at;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_guide;
    QPushButton *pushButton_logout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(938, 532);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_vtt = new QPushButton(centralwidget);
        pushButton_vtt->setObjectName(QString::fromUtf8("pushButton_vtt"));
        pushButton_vtt->setGeometry(QRect(220, 410, 511, 61));
        pushButton_vtt->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Comic Sans MS\";"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 120, 401, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_id = new QPushButton(widget);
        pushButton_id->setObjectName(QString::fromUtf8("pushButton_id"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_id->sizePolicy().hasHeightForWidth());
        pushButton_id->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_id);

        pushButton_ad = new QPushButton(widget);
        pushButton_ad->setObjectName(QString::fromUtf8("pushButton_ad"));
        sizePolicy.setHeightForWidth(pushButton_ad->sizePolicy().hasHeightForWidth());
        pushButton_ad->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_ad);

        pushButton_at = new QPushButton(widget);
        pushButton_at->setObjectName(QString::fromUtf8("pushButton_at"));
        sizePolicy.setHeightForWidth(pushButton_at->sizePolicy().hasHeightForWidth());
        pushButton_at->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_at);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(630, 10, 292, 31));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_guide = new QPushButton(widget1);
        pushButton_guide->setObjectName(QString::fromUtf8("pushButton_guide"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_guide->sizePolicy().hasHeightForWidth());
        pushButton_guide->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_guide);

        pushButton_logout = new QPushButton(widget1);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        sizePolicy1.setHeightForWidth(pushButton_logout->sizePolicy().hasHeightForWidth());
        pushButton_logout->setSizePolicy(sizePolicy1);
        pushButton_logout->setMinimumSize(QSize(203, 0));

        horizontalLayout->addWidget(pushButton_logout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_vtt->setText(QCoreApplication::translate("MainWindow", "View Generated Timetables", nullptr));
        pushButton_id->setText(QCoreApplication::translate("MainWindow", "Insert data", nullptr));
        pushButton_ad->setText(QCoreApplication::translate("MainWindow", "Available data", nullptr));
        pushButton_at->setText(QCoreApplication::translate("MainWindow", "Available TimeTables", nullptr));
        pushButton_guide->setText(QCoreApplication::translate("MainWindow", "Guide", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
