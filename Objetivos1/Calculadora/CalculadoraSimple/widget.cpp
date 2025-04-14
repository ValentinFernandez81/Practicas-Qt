#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("Calculadora");

    ui->resultado->setText("0.0");

    ui->numero1->setMaximum(1000);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_suma_clicked()
{
    ui->resultado->setText(QString::number(ui->numero1->value() + ui->numero2->value()));
}


void Widget::on_resta_clicked()
{

}


void Widget::on_multiplica_clicked()
{

}


void Widget::on_divide_clicked()
{

}

