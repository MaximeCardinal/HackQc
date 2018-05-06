#ifndef RESERVATION_H
#define RESERVATION_H

#include <QDialog>

namespace Ui {
class Reservation;
}

class Reservation : public QDialog
{
    Q_OBJECT

public:
    explicit Reservation(QWidget *parent = 0);
    ~Reservation();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Reservation *ui;
};

#endif // RESERVATION_H
