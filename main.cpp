#include "mainwindow.h"

#include <QApplication>
#include "Browser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Browser *b = new Browser();
    b->setWindowTitle("Browser");
    b->show();

    return a.exec();
}
