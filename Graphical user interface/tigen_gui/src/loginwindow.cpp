#include "loginwindow.h"
#include "./ui_loginwindow.h"

#include <QMessageBox>
#include <QPixmap>
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    QPixmap pics(":/resources/image/TTG.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();

    ui->label_pic->setPixmap(pics.scaled(w,h));

}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "t" && password =="t"){
        QMessageBox::information(this,"Login","Username and password is correct");
        hide();
        mainWindow = new MainWindow(this);
        mainWindow->show();
        connect(mainWindow, SIGNAL(showLoginWindow()), this, SLOT(showLoginWindow()));
    }
    else {
        QMessageBox::warning(this,"Login","username and password is not correct");
       }
}

void LoginWindow::showLoginWindow(){
    show();
}


