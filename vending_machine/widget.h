#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    int money{0};
    ~Widget();

    void changeMoney(int n);
private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_PbCoffee_clicked();

    void on_PbCoke_clicked();

    void on_PbTea_clicked();

    void on_PbReturn_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
