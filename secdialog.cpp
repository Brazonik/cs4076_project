#include "secdialog.h"
#include "ui_secdialog.h"
#include <QComboBox>
#include <QStringList>
using namespace std;


secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);



}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_pushButton_clicked()
{

}


void secDialog::on_checkBox_5_stateChanged(int arg1)
{
    if(ui->checkBox_5->isChecked()){
        ui->label_3->hide();
    } else if (ui->checkBox_5->isCheckable()) {
        ui->label_3->show();
    }
    if(ui->checkBox_5->isChecked()){
        ui->label_4->hide();
    } else if (ui->checkBox_5->isCheckable()) {
        ui->label_4->show();
    }
}





void secDialog::on_checkBox_8_stateChanged(int arg1)
{
    if(ui->checkBox_8->isChecked()){
        ui->label_4->hide();
    } else if (ui->checkBox_8->isCheckable()) {
        ui->label_4->show();
    }
    if(ui->checkBox_8->isChecked()){
        ui->label_3->hide();
    } else if (ui->checkBox_8->isCheckable()) {
        ui->label_3->show();
    }
    if(ui->checkBox_8->isChecked()){
        ui->label_8->hide();
    } else if (ui->checkBox_8->isCheckable()) {
        ui->label_8->show();
    }
}
void secDialog::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        ui->label_6->hide();
    } else if (ui->checkBox->isCheckable()) {
        ui->label_6->show();

        if(ui->checkBox->isChecked()){
            ui->label_9->hide();
        } else if (ui->checkBox->isCheckable()) {
            ui->label_9->show();
}
    }
}


void secDialog::on_checkBox_2_stateChanged(int arg1)
{
    if(ui->checkBox_2->isChecked()){
        ui->label_6->hide();
    } else if (ui->checkBox_2->isCheckable()) {
        ui->label_6->show();
}
}


void secDialog::on_checkBox_4_stateChanged(int arg1)
{
    if(ui->checkBox_4->isChecked()){
        ui->label_7->hide();
    } else if (ui->checkBox_4->isCheckable()) {
        ui->label_7->show();
}

    if(ui->checkBox_4->isChecked()){
        ui->label_9->hide();
    } else if (ui->checkBox_4->isCheckable()) {
        ui->label_9->show();
}
}


void secDialog::on_checkBox_3_stateChanged(int arg1)
{
    if(ui->checkBox_3->isChecked()){
        ui->label_9->hide();
    } else if (ui->checkBox_3->isCheckable()) {
        ui->label_9->show();
}

    if(ui->checkBox_3->isChecked()){
        ui->label_7->hide();
    } else if (ui->checkBox_3->isCheckable()) {
        ui->label_7->show();
}
}

