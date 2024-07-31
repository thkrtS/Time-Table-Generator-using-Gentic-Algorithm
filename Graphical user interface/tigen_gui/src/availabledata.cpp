#include "availabledata.h"
#include "ui_availabledata.h"

AvailableData::AvailableData(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AvailableData)
{
    ui->setupUi(this);
}

AvailableData::~AvailableData()
{
    delete ui;
}

void AvailableData::on_pushButton_back_clicked()
{
    hide();
    emit showMainWindow();
}

