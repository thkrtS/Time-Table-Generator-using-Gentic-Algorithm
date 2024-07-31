#include "viewtimetable.h"
#include "ui_viewtimetable.h"

ViewTimetable::ViewTimetable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewTimetable)
{
    ui->setupUi(this);
}

ViewTimetable::~ViewTimetable()
{
    delete ui;
}

void ViewTimetable::on_pushButton_back_clicked()
{
    hide();
    emit showMainWindow();
}


void ViewTimetable::on_pushButton_vr_clicked()
{
    result = new Result(this);
    result->show();
}

