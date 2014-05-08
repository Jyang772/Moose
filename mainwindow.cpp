#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mailer.h"
#include <string>
using namespace std;
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mail Anonymoose;

   // string from = "\"";
    string lawl = "\"" + ui->Name->text().toStdString() + "\"";
    string email = " <" + ui->From->text().toStdString() + ">";

    string tt  = lawl + email;


   // qDebug() << QString(QString::fromStdString(tt)) ;
   Anonymoose.sendmail((ui->To->text().toStdString()).c_str(), tt.c_str(), (ui->Subject->text().toStdString()).c_str(), (ui->Message->toPlainText().toStdString()).c_str());

}
