#ifndef AVAILABLEDATA_H
#define AVAILABLEDATA_H

#include <QMainWindow>

namespace Ui {
class AvailableData;
}

class AvailableData : public QMainWindow
{
    Q_OBJECT

public:
    explicit AvailableData(QWidget *parent = nullptr);
    ~AvailableData();
signals:
    void showMainWindow();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::AvailableData *ui;
};

#endif // AVAILABLEDATA_H
