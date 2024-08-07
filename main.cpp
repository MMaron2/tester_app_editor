#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;



    w.setLayout(w.layout);
    w.show();
    return a.exec();
}
