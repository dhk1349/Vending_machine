#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QString>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int n){
    if(money<-n&&n<0){//when there is not enough money
    }
    else{money+=n;}
    ui->lcdNumber->display(money);
}


void Widget::on_pb10_clicked()
{
    changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);

}

void Widget::on_pb100_clicked()
{
    changeMoney(100);

}

void Widget::on_pb500_clicked()
{
    changeMoney(500);

}

void Widget::on_PbCoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_PbCoke_clicked()
{
    changeMoney(-200);
}

void Widget::on_PbTea_clicked()
{
    changeMoney(-300);
}

void Widget::on_PbReturn_clicked()
{
    QString coin="========\n";
    int coins[4]={500,100,50,10};
    int coinnum[4];
    for(int i=0;i<4;i++){
        coinnum[i]=money/coins[i];
        coin.append(QString::number(coins[i]));
        coin.append(": ");
        coin.append(QString::number(coinnum[i]));
        coin.append("\n");
        money-=coins[i]*coinnum[i];
    }
    coin.append("========");
    QMessageBox::information(this, "Here's Change", coin);
    ui->lcdNumber->display(money);
}
