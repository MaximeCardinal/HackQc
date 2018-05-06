/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_Adresse;
    QLineEdit *lineEdit_Horaire;
    QPushButton *pushButton_Reservation;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_Utilisateur;
    QLabel *label_repentigny;
    QLabel *label_pub;
    QPushButton *pushButton_Deconnexion;
    QLabel *label_Appercu;
    QTextEdit *textEdit_Restrictions;
    QTextEdit *textEdit_SiteWeb;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1220, 800);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(200, 197, 199, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(128, 255, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(75, 247, 75, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(11, 120, 11, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(14, 160, 14, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 170, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(122, 113, 97, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        QBrush brush8(QColor(0, 85, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        QBrush brush10(QColor(138, 247, 138, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        QBrush brush11(QColor(22, 240, 22, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1111, 771));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(145, 200, 102, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush13(QColor(210, 255, 175, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(177, 227, 138, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(72, 100, 51, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(97, 133, 68, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush17(QColor(255, 255, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush17);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush17);
        QBrush brush18(QColor(64, 200, 54, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush18);
        QBrush brush19(QColor(44, 200, 54, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush19);
        QBrush brush20(QColor(200, 227, 178, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush20);
        QBrush brush21(QColor(255, 255, 220, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush21);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush19);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush21);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frame->setPalette(palette1);
        frame->setAcceptDrops(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 220, 241, 31));
        QFont font;
        font.setPointSize(14);
        font.setUnderline(true);
        label->setFont(font);
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(20, 260, 291, 31));
        comboBox->setEditable(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 300, 141, 31));
        label_2->setFont(font);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 340, 61, 21));
        QFont font1;
        font1.setPointSize(9);
        label_3->setFont(font1);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 370, 61, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 410, 91, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 470, 61, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 520, 141, 31));
        label_7->setFont(font);
        lineEdit_Adresse = new QLineEdit(frame);
        lineEdit_Adresse->setObjectName(QStringLiteral("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(140, 340, 281, 22));
        lineEdit_Adresse->setReadOnly(true);
        lineEdit_Horaire = new QLineEdit(frame);
        lineEdit_Horaire->setObjectName(QStringLiteral("lineEdit_Horaire"));
        lineEdit_Horaire->setGeometry(QRect(140, 370, 281, 22));
        lineEdit_Horaire->setReadOnly(true);
        pushButton_Reservation = new QPushButton(frame);
        pushButton_Reservation->setObjectName(QStringLiteral("pushButton_Reservation"));
        pushButton_Reservation->setGeometry(QRect(40, 560, 161, 41));
        pushButton_Reservation->setFont(font1);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(460, 220, 221, 31));
        label_9->setFont(font);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(960, 20, 111, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(true);
        label_10->setFont(font2);
        lineEdit_Utilisateur = new QLineEdit(frame);
        lineEdit_Utilisateur->setObjectName(QStringLiteral("lineEdit_Utilisateur"));
        lineEdit_Utilisateur->setGeometry(QRect(960, 50, 121, 22));
        lineEdit_Utilisateur->setReadOnly(true);
        label_repentigny = new QLabel(frame);
        label_repentigny->setObjectName(QStringLiteral("label_repentigny"));
        label_repentigny->setGeometry(QRect(10, 20, 911, 191));
        label_repentigny->setPixmap(QPixmap(QString::fromUtf8("Bandeau_Repentigny.jpg")));
        label_repentigny->setScaledContents(true);
        label_pub = new QLabel(frame);
        label_pub->setObjectName(QStringLiteral("label_pub"));
        label_pub->setGeometry(QRect(200, 650, 711, 111));
        label_pub->setPixmap(QPixmap(QString::fromUtf8("HackPub.png")));
        label_pub->setScaledContents(true);
        pushButton_Deconnexion = new QPushButton(frame);
        pushButton_Deconnexion->setObjectName(QStringLiteral("pushButton_Deconnexion"));
        pushButton_Deconnexion->setGeometry(QRect(960, 90, 121, 31));
        pushButton_Deconnexion->setFont(font1);
        label_Appercu = new QLabel(frame);
        label_Appercu->setObjectName(QStringLiteral("label_Appercu"));
        label_Appercu->setGeometry(QRect(460, 260, 581, 351));
        textEdit_Restrictions = new QTextEdit(frame);
        textEdit_Restrictions->setObjectName(QStringLiteral("textEdit_Restrictions"));
        textEdit_Restrictions->setGeometry(QRect(140, 410, 281, 41));
        textEdit_Restrictions->setReadOnly(true);
        textEdit_SiteWeb = new QTextEdit(frame);
        textEdit_SiteWeb->setObjectName(QStringLiteral("textEdit_SiteWeb"));
        textEdit_SiteWeb->setGeometry(QRect(140, 470, 281, 41));
        textEdit_SiteWeb->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Aire de stationnement:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Informations:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Adresse:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Horaire:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Restrictions:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Site Web:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Reservation:", nullptr));
        pushButton_Reservation->setText(QApplication::translate("MainWindow", "Reserve", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Apper\303\247u de l'endroit:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Utilisateur:", nullptr));
        label_repentigny->setText(QString());
        label_pub->setText(QString());
        pushButton_Deconnexion->setText(QApplication::translate("MainWindow", "Deconnexion", nullptr));
        label_Appercu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
