#include "insertdata.h"
#include "ui_insertdata.h"

InsertData::InsertData(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InsertData)
{
    ui->setupUi(this);
}

InsertData::~InsertData()
{
    delete ui;
}

void InsertData::on_pushButton_back_clicked()
{
    hide();
    emit showMainWindow();
}

