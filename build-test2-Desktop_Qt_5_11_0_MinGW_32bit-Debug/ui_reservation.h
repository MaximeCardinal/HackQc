/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Reservation
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Reservation)
    {
        if (Reservation->objectName().isEmpty())
            Reservation->setObjectName(QStringLiteral("Reservation"));
        Reservation->resize(967, 569);
        label = new QLabel(Reservation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 211, 51));
        QFont font;
        font.setPointSize(16);
        font.setUnderline(true);
        label->setFont(font);
        pushButton = new QPushButton(Reservation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 440, 201, 61));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Reservation);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 440, 201, 61));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Reservation);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 440, 201, 61));
        pushButton_3->setFont(font1);
        tableWidget = new QTableWidget(Reservation);
        if (tableWidget->columnCount() < 17)
            tableWidget->setColumnCount(17);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 16, __qtablewidgetitem16);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 60, 921, 311));
        tableWidget->setRowCount(7);
        tableWidget->setColumnCount(17);

        retranslateUi(Reservation);

        QMetaObject::connectSlotsByName(Reservation);
    } // setupUi

    void retranslateUi(QDialog *Reservation)
    {
        Reservation->setWindowTitle(QApplication::translate("Reservation", "Dialog", nullptr));
        label->setText(QApplication::translate("Reservation", "Reservation:", nullptr));
        pushButton->setText(QApplication::translate("Reservation", "Reserver", nullptr));
        pushButton_2->setText(QApplication::translate("Reservation", "Editer", nullptr));
        pushButton_3->setText(QApplication::translate("Reservation", "Cancel", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableWidget->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("Reservation", "7h", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->item(0, 1);
        ___qtablewidgetitem1->setText(QApplication::translate("Reservation", "8h", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 2);
        ___qtablewidgetitem2->setText(QApplication::translate("Reservation", "9h", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 3);
        ___qtablewidgetitem3->setText(QApplication::translate("Reservation", "10h", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 4);
        ___qtablewidgetitem4->setText(QApplication::translate("Reservation", "11h", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 5);
        ___qtablewidgetitem5->setText(QApplication::translate("Reservation", "12h", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 6);
        ___qtablewidgetitem6->setText(QApplication::translate("Reservation", "13h", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 7);
        ___qtablewidgetitem7->setText(QApplication::translate("Reservation", "14h", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 8);
        ___qtablewidgetitem8->setText(QApplication::translate("Reservation", "15h", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 9);
        ___qtablewidgetitem9->setText(QApplication::translate("Reservation", "16h", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 10);
        ___qtablewidgetitem10->setText(QApplication::translate("Reservation", "17h", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 11);
        ___qtablewidgetitem11->setText(QApplication::translate("Reservation", "18h", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 12);
        ___qtablewidgetitem12->setText(QApplication::translate("Reservation", "19h", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 13);
        ___qtablewidgetitem13->setText(QApplication::translate("Reservation", "20h", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 14);
        ___qtablewidgetitem14->setText(QApplication::translate("Reservation", "21h", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 15);
        ___qtablewidgetitem15->setText(QApplication::translate("Reservation", "22h", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 16);
        ___qtablewidgetitem16->setText(QApplication::translate("Reservation", "23h", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Reservation: public Ui_Reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
