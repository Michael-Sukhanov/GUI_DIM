#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>
#include <QScrollArea>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QScrollArea scroll;
    MainWindow *w=new MainWindow;

    scroll.setWidget(w);
    scroll.resize(1140,800);
    scroll.show();
    qApp->setStyle(QStyleFactory::create("Fusion"));

    return a.exec();
}
