#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
#include "about.h"
#include "rate_us.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_actionContact_triggered();

    void on_actionAout_triggered();

    void on_actionAbout_triggered();

    void on_horizontalSlider_actionTriggered(int action);

    void on_actionRate_Us_triggered();

private:
    Ui::MainWindow *ui;
    secDialog *SecDialog;
    about *About;
    rate_us *Rate_us;
};
#endif // MAINWINDOW_H
