#include "result.h"
#include "ui_result.h"

Result::Result(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
}

Result::~Result()
{
    delete ui;
}
