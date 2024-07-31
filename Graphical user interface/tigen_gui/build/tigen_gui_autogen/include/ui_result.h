/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(1218, 508);
        tableWidget = new QTableWidget(Result);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setText(QString::fromUtf8("I9 - R8 - C14"));
        tableWidget->setItem(4, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem47);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 1191, 356));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setAcceptDrops(false);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(true);
        tableWidget->setWordWrap(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(180);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(30);
        tableWidget->verticalHeader()->setDefaultSectionSize(55);
        tableWidget->verticalHeader()->setStretchLastSection(false);
        pushButton = new QPushButton(Result);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 440, 80, 29));
        label = new QLabel(Result);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(32, 10, 211, 31));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QWidget *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("Result", "Result", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Result", "CT1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Result", "CT2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Result", "CT3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Result", "CT4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Result", "CT5", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Result", "CT6", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Result", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Result", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Result", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Result", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Result", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Result", "Saturday", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Result", "I9 - R8 - C14", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Result", "I10 - R10 - C13", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Result", "I13 - R5 - C12", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Result", "I4 - R9 - C10", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Result", "I13 - R1 - C4", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Result", "I5 - R4 - C6", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Result", "I18 - R1 - C9", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Result", "I13 - R9 - C6", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Result", "I7 - R10 -C19", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 3);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Result", " I2 - R3 - C8", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 4);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Result", "I14 - R3 - C1", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(1, 5);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Result", "I30 - R9 - C2", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(2, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Result", "I9 - R8 - C14", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(2, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("Result", "I10 - R10 - C13", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(2, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("Result", "I13 - R5 - C12", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 3);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("Result", "I4 - R9 - C10", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(2, 4);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("Result", "I13 - R1 - C4", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(2, 5);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("Result", "I5 - R4 - C6", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(3, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("Result", "I18 - R1 - C9", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(3, 1);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("Result", "I13 - R9 - C6", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(3, 2);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("Result", "I7 - R10 -C19", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(3, 3);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("Result", " I2 - R3 - C8", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(3, 4);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("Result", "I14 - R3 - C1", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(3, 5);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("Result", "I30 - R9 - C2", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(4, 1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("Result", "I10 - R10 - C13", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(4, 2);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("Result", "I13 - R5 - C12", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(4, 3);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("Result", "I4 - R9 - C10", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(4, 4);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("Result", "I13 - R1 - C4", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(4, 5);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("Result", "I5 - R4 - C6", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(5, 0);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("Result", "I18 - R1 - C9", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(5, 1);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("Result", "I13 - R9 - C6", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(5, 2);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("Result", "I7 - R10 -C19", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(5, 3);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("Result", " I2 - R3 - C8", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(5, 4);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("Result", "I14 - R3 - C1", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(5, 5);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("Result", "I30 - R9 - C2", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("Result", "Print ", nullptr));
        label->setText(QCoreApplication::translate("Result", "1st year Timetbale :-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
