#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_logout_clicked()
{
    hide();
    emit showLoginWindow();
}


void MainWindow::on_pushButton_id_clicked()
{
    hide();
    insertData = new InsertData(this);
    insertData->show();
    connect(insertData, SIGNAL(showMainWindow()), this, SLOT(showMainWindow()));
}


void MainWindow::on_pushButton_ad_clicked()
{
    hide();
    availableData = new AvailableData(this);
    availableData->show();
    connect(availableData, SIGNAL(showMainWindow()), this, SLOT(showMainWindow()));
}

void MainWindow::showMainWindow(){
    show();
}


void MainWindow::on_pushButton_vtt_clicked()
{
    hide();
    viewTimetable = new ViewTimetable(this);
    viewTimetable->show();
    connect(viewTimetable, SIGNAL(showMainWindow()), this, SLOT(showMainWindow()));
}

