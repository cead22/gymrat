#include <QtGui/QApplication>
#include "gr.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GR w;
    w.show();
    return a.exec();
}
