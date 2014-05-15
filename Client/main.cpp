#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *coach = new QSplashScreen;
    coach->setPixmap(QPixmap("./coach.jpg"));
    coach->show();




    MainWindow w;
    w.show();

    coach->finish(&w);
    delete coach;

    return a.exec();
}
