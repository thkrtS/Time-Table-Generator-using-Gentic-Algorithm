#ifndef VIEWTIMETABLE_H
#define VIEWTIMETABLE_H

#include <QMainWindow>
#include "result.h"
namespace Ui {
class ViewTimetable;
}

class ViewTimetable : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewTimetable(QWidget *parent = nullptr);
    ~ViewTimetable();
signals:
    void showMainWindow();
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_vr_clicked();

private:
    Ui::ViewTimetable *ui;
    Result *result;
};

#endif // VIEWTIMETABLE_H
