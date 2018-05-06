#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_pushButton_Confirmation_clicked();
    //void on_pushButton_Deconnexion_clicked();
    void on_pushButton_Reservation_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
