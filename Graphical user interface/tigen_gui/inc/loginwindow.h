#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();
    void showLoginWindow();

private:
    Ui::LoginWindow *ui;
    MainWindow *mainWindow;
};
#endif // LOGINWINDOW_H
