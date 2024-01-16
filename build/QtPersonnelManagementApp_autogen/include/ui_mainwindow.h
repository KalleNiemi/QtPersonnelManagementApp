/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *mainViewTab;
    QWidget *addNewTab;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QPushButton *addNewEmployeeButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 551));
        mainViewTab = new QWidget();
        mainViewTab->setObjectName("mainViewTab");
        tabWidget->addTab(mainViewTab, QString());
        addNewTab = new QWidget();
        addNewTab->setObjectName("addNewTab");
        lineEdit = new QLineEdit(addNewTab);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 30, 113, 24));
        lineEdit_2 = new QLineEdit(addNewTab);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 30, 113, 24));
        lineEdit_3 = new QLineEdit(addNewTab);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 30, 113, 24));
        comboBox = new QComboBox(addNewTab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(410, 30, 201, 24));
        addNewEmployeeButton = new QPushButton(addNewTab);
        addNewEmployeeButton->setObjectName("addNewEmployeeButton");
        addNewEmployeeButton->setGeometry(QRect(650, 20, 80, 61));
        label = new QLabel(addNewTab);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 61, 16));
        label_2 = new QLabel(addNewTab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 10, 61, 16));
        label_3 = new QLabel(addNewTab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 10, 141, 16));
        label_4 = new QLabel(addNewTab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 131, 16));
        lineEdit_4 = new QLineEdit(addNewTab);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 130, 113, 24));
        lineEdit_5 = new QLineEdit(addNewTab);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(200, 130, 113, 24));
        label_5 = new QLabel(addNewTab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 100, 121, 16));
        tabWidget->addTab(addNewTab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mainViewTab), QCoreApplication::translate("MainWindow", "Main View", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Salesman", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Monthly paid employee", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Hourly paid employee", nullptr));

        addNewEmployeeButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Social security number", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Monthly Compensation", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Hourly Compensation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(addNewTab), QCoreApplication::translate("MainWindow", "Add New Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
