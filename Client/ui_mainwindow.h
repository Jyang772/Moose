/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *To;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *From;
    QLineEdit *Subject;
    QTextEdit *Message;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *Name;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(532, 432);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        To = new QLineEdit(centralWidget);
        To->setObjectName(QStringLiteral("To"));
        To->setGeometry(QRect(110, 0, 231, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 67, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 0, 67, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 67, 31));
        From = new QLineEdit(centralWidget);
        From->setObjectName(QStringLiteral("From"));
        From->setGeometry(QRect(110, 30, 231, 27));
        Subject = new QLineEdit(centralWidget);
        Subject->setObjectName(QStringLiteral("Subject"));
        Subject->setGeometry(QRect(110, 90, 231, 27));
        Message = new QTextEdit(centralWidget);
        Message->setObjectName(QStringLiteral("Message"));
        Message->setGeometry(QRect(110, 130, 391, 211));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 67, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 340, 99, 27));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 60, 67, 31));
        Name = new QLineEdit(centralWidget);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(110, 60, 231, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 532, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(To, From);
        QWidget::setTabOrder(From, Name);
        QWidget::setTabOrder(Name, Subject);
        QWidget::setTabOrder(Subject, Message);
        QWidget::setTabOrder(Message, pushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "From: ", 0));
        label_2->setText(QApplication::translate("MainWindow", "To:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Subject: ", 0));
        label_4->setText(QApplication::translate("MainWindow", "Message:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Send!", 0));
        label_5->setText(QApplication::translate("MainWindow", "Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
