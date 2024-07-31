#ifndef INSERTDATA_H
#define INSERTDATA_H

#include <QMainWindow>

namespace Ui {
class InsertData;
}

class InsertData : public QMainWindow
{
    Q_OBJECT

public:
    explicit InsertData(QWidget *parent = nullptr);
    ~InsertData();
signals:
    void showMainWindow();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::InsertData *ui;
};

#endif // INSERTDATA_H
