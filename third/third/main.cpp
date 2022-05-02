#include "thirdwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    thirdWindow w;
    w.show();
    return a.exec();
}
