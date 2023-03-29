 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QPixmap>
#include <string>
#include <QString>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/anikm/OneDrive/Pictures/Cooking-Recipe-PNG-Images.png");
    //pix("C:/Users/anikm/OneDrive/Pictures/R.png");
    int width = ui->picture1->width();
    int height = ui->picture1->height();
    int width2 = ui->picture2->width();
    int height2 = ui->picture2->height();
    ui->picture1->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));

    ui->comboBox->addItem("breakfast");
    ui->comboBox->addItem("lunch");
    ui->comboBox->addItem("dinner");
    ui->comboBox->addItem("snack");
    ui->comboBox->addItem("drink");



   // ui->picture2->setPixmap(pix.scaled(width2, height2, Qt::KeepAspectRatio));


    // pix("C:/Users/anikm/OneDrive/Pictures/R.png");
    //int width2 = ui->picture2->width();
    //int height2 = ui->picture2->height();
    //ui->picture2->setPixmap(pix.scaled(width2, height2, Qt::KeepAspectRatio));
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

