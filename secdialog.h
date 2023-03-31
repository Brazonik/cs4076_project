#ifndef SECDIALOG_H
#define SECDIALOG_H
#include <QDialog>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = nullptr);
    ~secDialog();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

private:
    Ui::secDialog *ui;

};

#endif // SECDIALOG_H
