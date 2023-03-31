#ifndef RATE_US_H
#define RATE_US_H

#include <QDialog>

namespace Ui {
class rate_us;
}

class rate_us : public QDialog
{
    Q_OBJECT

public:
    explicit rate_us(QWidget *parent = nullptr);
    ~rate_us();

private slots:
    void on_horizontalSlider_actionTriggered(int action);

private:
    Ui::rate_us *ui;
};

#endif // RATE_US_H
