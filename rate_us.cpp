#include "rate_us.h"
#include "ui_rate_us.h"
#include <QMessageBox>
rate_us::rate_us(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rate_us)
{
    ui->setupUi(this);
}

rate_us::~rate_us()
{
    delete ui;
}

void rate_us::on_horizontalSlider_actionTriggered(int action)
{
    if(ui->horizontalSlider->value() == 1){
        QMessageBox::information(this,"Rating", "We are sorry to hear that. How can we improve.");
    }

    if(ui->horizontalSlider->value() == 2){
        QMessageBox::information(this,"Rating", "I hope we can change your mind.");
    }

    if(ui->horizontalSlider->value() == 3){
        QMessageBox::information(this,"Rating", "It is okay resuslt. ");
    }

    if(ui->horizontalSlider->value() == 4){
        QMessageBox::information(this,"Rating", "We are happy to help");
    }

    if(ui->horizontalSlider->value() == 5){
        QMessageBox::information(this,"Rating", "You gave us a perfect score. Thank you.");
    }
}

