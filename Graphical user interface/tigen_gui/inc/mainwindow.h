#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "insertdata.h"
#include "availabledata.h"
#include "viewtimetable.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void showLoginWindow();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_id_clicked();

    void on_pushButton_ad_clicked();

    void showMainWindow();

    void on_pushButton_vtt_clicked();

private:
    Ui::MainWindow *ui;
    InsertData *insertData;
    AvailableData *availableData;
    ViewTimetable *viewTimetable;
};

#endif // MAINWINDOW_H
