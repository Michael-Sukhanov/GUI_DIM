#include "mainwindow.h"
#include "pm.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
QLabel THIS_PM_NO;
    return a.exec();
}
