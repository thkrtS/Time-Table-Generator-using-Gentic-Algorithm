/********************************************************************************
** Form generated from reading UI file 'availabledata.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVAILABLEDATA_H
#define UI_AVAILABLEDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AvailableData
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_5;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *AvailableData)
    {
        if (AvailableData->objectName().isEmpty())
            AvailableData->setObjectName(QString::fromUtf8("AvailableData"));
        AvailableData->resize(938, 532);
        centralwidget = new QWidget(AvailableData);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 430, 231, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 351, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 90, 721, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_4->addWidget(radioButton_4);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(820, 10, 83, 29));
        AvailableData->setCentralWidget(centralwidget);

        retranslateUi(AvailableData);

        QMetaObject::connectSlotsByName(AvailableData);
    } // setupUi

    void retranslateUi(QMainWindow *AvailableData)
    {
        AvailableData->setWindowTitle(QCoreApplication::translate("AvailableData", "Available Data", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AvailableData", "Generate Timetable", nullptr));
        label->setText(QCoreApplication::translate("AvailableData", "List of Available data : ", nullptr));
        radioButton->setText(QCoreApplication::translate("AvailableData", "Data 1", nullptr));
        pushButton->setText(QCoreApplication::translate("AvailableData", "View Data", nullptr));
        radioButton_2->setText(QCoreApplication::translate("AvailableData", "Data 2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AvailableData", "View Data", nullptr));
        radioButton_3->setText(QCoreApplication::translate("AvailableData", "Data 1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AvailableData", "View Data", nullptr));
        radioButton_4->setText(QCoreApplication::translate("AvailableData", "Data 1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AvailableData", "View Data", nullptr));
        pushButton_back->setText(QCoreApplication::translate("AvailableData", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AvailableData: public Ui_AvailableData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVAILABLEDATA_H
