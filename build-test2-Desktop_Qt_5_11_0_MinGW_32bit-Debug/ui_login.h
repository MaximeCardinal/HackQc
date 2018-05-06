/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_UtilisateurConnexion;
    QLineEdit *lineEdit_MotDePasseConnexion;
    QPushButton *pushButton_SeConnecter;
    QFrame *line;
    QLineEdit *lineEdit_UtilisateurNouvCompte;
    QLineEdit *lineEdit_MotDePasseNouvCompte;
    QLineEdit *lineEdit_PlaqueNouvCompte;
    QPushButton *pushButton_CreerNouvCompte;
    QLabel *label_4;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(597, 301);
        QFont font;
        font.setUnderline(true);
        Login->setFont(font);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 671, 81));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 101, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setUnderline(true);
        label_2->setFont(font2);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 80, 141, 41));
        QFont font3;
        font3.setPointSize(10);
        label_3->setFont(font3);
        lineEdit_UtilisateurConnexion = new QLineEdit(Login);
        lineEdit_UtilisateurConnexion->setObjectName(QStringLiteral("lineEdit_UtilisateurConnexion"));
        lineEdit_UtilisateurConnexion->setGeometry(QRect(10, 130, 231, 22));
        QFont font4;
        font4.setUnderline(false);
        lineEdit_UtilisateurConnexion->setFont(font4);
        lineEdit_MotDePasseConnexion = new QLineEdit(Login);
        lineEdit_MotDePasseConnexion->setObjectName(QStringLiteral("lineEdit_MotDePasseConnexion"));
        lineEdit_MotDePasseConnexion->setGeometry(QRect(10, 170, 231, 22));
        lineEdit_MotDePasseConnexion->setFont(font4);
        pushButton_SeConnecter = new QPushButton(Login);
        pushButton_SeConnecter->setObjectName(QStringLiteral("pushButton_SeConnecter"));
        pushButton_SeConnecter->setGeometry(QRect(60, 210, 131, 28));
        pushButton_SeConnecter->setFont(font4);
        line = new QFrame(Login);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(270, 80, 21, 211));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit_UtilisateurNouvCompte = new QLineEdit(Login);
        lineEdit_UtilisateurNouvCompte->setObjectName(QStringLiteral("lineEdit_UtilisateurNouvCompte"));
        lineEdit_UtilisateurNouvCompte->setGeometry(QRect(300, 130, 231, 22));
        lineEdit_UtilisateurNouvCompte->setFont(font4);
        lineEdit_MotDePasseNouvCompte = new QLineEdit(Login);
        lineEdit_MotDePasseNouvCompte->setObjectName(QStringLiteral("lineEdit_MotDePasseNouvCompte"));
        lineEdit_MotDePasseNouvCompte->setGeometry(QRect(300, 170, 231, 22));
        lineEdit_MotDePasseNouvCompte->setFont(font4);
        lineEdit_PlaqueNouvCompte = new QLineEdit(Login);
        lineEdit_PlaqueNouvCompte->setObjectName(QStringLiteral("lineEdit_PlaqueNouvCompte"));
        lineEdit_PlaqueNouvCompte->setGeometry(QRect(300, 210, 231, 22));
        lineEdit_PlaqueNouvCompte->setFont(font4);
        pushButton_CreerNouvCompte = new QPushButton(Login);
        pushButton_CreerNouvCompte->setObjectName(QStringLiteral("pushButton_CreerNouvCompte"));
        pushButton_CreerNouvCompte->setGeometry(QRect(350, 240, 131, 28));
        pushButton_CreerNouvCompte->setFont(font4);
        label_4 = new QLabel(Login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 250, 151, 31));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        label->setText(QApplication::translate("Login", "Bienvenue au service de reservation de parking!", nullptr));
        label_2->setText(QApplication::translate("Login", "Connexion:", nullptr));
        label_3->setText(QApplication::translate("Login", "Creer un compte:", nullptr));
        lineEdit_UtilisateurConnexion->setText(QApplication::translate("Login", "Courriel", nullptr));
        lineEdit_MotDePasseConnexion->setText(QApplication::translate("Login", "Mot de passe", nullptr));
        pushButton_SeConnecter->setText(QApplication::translate("Login", "Se connecter", nullptr));
        lineEdit_UtilisateurNouvCompte->setText(QApplication::translate("Login", "Courriel", nullptr));
        lineEdit_MotDePasseNouvCompte->setText(QApplication::translate("Login", "Mot de passe", nullptr));
        lineEdit_PlaqueNouvCompte->setText(QApplication::translate("Login", "Plaque d'immatriculation", nullptr));
        pushButton_CreerNouvCompte->setText(QApplication::translate("Login", "Creer le compte", nullptr));
        label_4->setText(QApplication::translate("Login", "Le compte n'est pas valide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
