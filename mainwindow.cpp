 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QPixmap>
#include <string>
#include <QString>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/anikm/OneDrive/Pictures/Cooking-Recipe-PNG-Images.png");
    int width = ui->picture1->width();
    int height = ui->picture1->height();
    ui->picture1->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));

    ui->comboBox->addItem("breakfast");
    ui->comboBox->addItem("lunch");
    ui->comboBox->addItem("dinner");
    ui->comboBox->addItem("snack");
    ui->comboBox->addItem("drink");

    ui->scrollArea->setWidgetResizable(true);
    ui->textEdit->setText("Spot a little hottie when I flipped out the shade"
                          "Lookin like a red Rari sittin in a driveway"
                          "Bottle of Cîroc with a hint of Kool-Aid"
                          "She done pulled up like I'm getting rid of weeds"
                          "Are you tired from running through my mind?"
                          "Take a break and we can have a good time"
                          "Show you moves like I'm the new James Brown"
                          "Me and you should get a room right now");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString Name = ui->lineEdit_name->text();
    QString Password =  ui->lineEdit_password->text();

    if(Name == "lol" && Password== "lol"){
        QMessageBox::information(this, "Login", "Login successful");
        hide();
        SecDialog = new secDialog(this);
        SecDialog->show();

    }
     else {
        QMessageBox::warning(this, "login", "unsucessful");
    }




}

void MainWindow::on_comboBox_activated(int index)
{
    QMessageBox::information(this, "Mo'Recipes","You must login to view");

}


void MainWindow::on_radioButton_clicked()
{
    if(ui->radioButton->isCheckable()){
        QMessageBox::information(this, "Safety", "You are over 16. You will be fine");
    }

}


void MainWindow::on_radioButton_2_clicked()
{
    if(ui->radioButton_2->isCheckable()){
       QMessageBox::StandardButton answer = QMessageBox::question(this, "Safety", "Are you with a guardian",QMessageBox::Yes | QMessageBox::No);

       if(answer== QMessageBox::No){
           QApplication::quit();
       } else {
           qDebug()<<"You can proceed";
       }

    }
}


void MainWindow::on_actionContact_triggered()
{
    QMessageBox::information(this, "Contact", "Number: xxx-xxx-xxx ");
}


void MainWindow::on_actionAout_triggered()
{
   QMessageBox::information(this, "Contact", "Email: xxxxxx@gmail.com ");
}


void MainWindow::on_actionAbout_triggered()
{
    About = new about(this);
    About->show();
}


void MainWindow::on_horizontalSlider_actionTriggered(int action)
{
    if(ui->horizontalSlider->value() == 2){
        QMessageBox::information(this,"Rating", "jyhsgfbh");
    }
}


void MainWindow::on_actionRate_Us_triggered()
{
    Rate_us = new rate_us(this);
    Rate_us->show();
}

