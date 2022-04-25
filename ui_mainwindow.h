/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *add_button;
    QLabel *label;
    QPushButton *Union;
    QPushButton *Intersect;
    QPushButton *SimSub;
    QLineEdit *ToSet1;
    QLabel *label_3;
    QLineEdit *ToSet2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QTextEdit *textEditSET1;
    QTextEdit *textEditSET2;
    QTextEdit *textEditRESULT;
    QPushButton *ClearSet1;
    QPushButton *ClearSet2;
    QPushButton *ClearResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        add_button = new QPushButton(centralwidget);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(20, 70, 131, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(620, 310, 31, 51));
        Union = new QPushButton(centralwidget);
        Union->setObjectName(QString::fromUtf8("Union"));
        Union->setGeometry(QRect(20, 140, 131, 61));
        Intersect = new QPushButton(centralwidget);
        Intersect->setObjectName(QString::fromUtf8("Intersect"));
        Intersect->setGeometry(QRect(20, 210, 131, 61));
        SimSub = new QPushButton(centralwidget);
        SimSub->setObjectName(QString::fromUtf8("SimSub"));
        SimSub->setGeometry(QRect(20, 280, 131, 61));
        ToSet1 = new QLineEdit(centralwidget);
        ToSet1->setObjectName(QString::fromUtf8("ToSet1"));
        ToSet1->setGeometry(QRect(180, 80, 111, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 50, 55, 16));
        ToSet2 = new QLineEdit(centralwidget);
        ToSet2->setObjectName(QString::fromUtf8("ToSet2"));
        ToSet2->setGeometry(QRect(310, 80, 111, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 50, 55, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 50, 55, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(600, 50, 55, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(720, 50, 55, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 20, 131, 22));
        textEditSET1 = new QTextEdit(centralwidget);
        textEditSET1->setObjectName(QString::fromUtf8("textEditSET1"));
        textEditSET1->setGeometry(QRect(450, 80, 104, 421));
        textEditSET2 = new QTextEdit(centralwidget);
        textEditSET2->setObjectName(QString::fromUtf8("textEditSET2"));
        textEditSET2->setGeometry(QRect(570, 80, 104, 421));
        textEditRESULT = new QTextEdit(centralwidget);
        textEditRESULT->setObjectName(QString::fromUtf8("textEditRESULT"));
        textEditRESULT->setGeometry(QRect(690, 80, 104, 421));
        ClearSet1 = new QPushButton(centralwidget);
        ClearSet1->setObjectName(QString::fromUtf8("ClearSet1"));
        ClearSet1->setGeometry(QRect(460, 510, 91, 31));
        ClearSet1->setMaximumSize(QSize(101, 16777215));
        ClearSet2 = new QPushButton(centralwidget);
        ClearSet2->setObjectName(QString::fromUtf8("ClearSet2"));
        ClearSet2->setGeometry(QRect(580, 510, 91, 31));
        ClearSet2->setMaximumSize(QSize(101, 16777215));
        ClearResult = new QPushButton(centralwidget);
        ClearResult->setObjectName(QString::fromUtf8("ClearResult"));
        ClearResult->setGeometry(QRect(700, 510, 91, 31));
        ClearResult->setMaximumSize(QSize(101, 16777215));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        textEditSET1->raise();
        comboBox->raise();
        add_button->raise();
        Union->raise();
        Intersect->raise();
        SimSub->raise();
        ToSet1->raise();
        ToSet2->raise();
        label_3->raise();
        label_2->raise();
        textEditSET2->raise();
        textEditRESULT->raise();
        ClearSet1->raise();
        ClearSet2->raise();
        ClearResult->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Union->setText(QCoreApplication::translate("MainWindow", "UNION", nullptr));
        Intersect->setText(QCoreApplication::translate("MainWindow", "INTERSECT", nullptr));
        SimSub->setText(QCoreApplication::translate("MainWindow", "SIM SUB", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TO SET2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TO SET1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SET1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "SET2", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "RESULT", nullptr));
        ClearSet1->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        ClearSet2->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        ClearResult->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
