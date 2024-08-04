#include "widget.h"
#include <QApplication>

#include <QGridLayout>
#include <QLayout>
#include <QFrame>
#include <QLabel>
#include <QtGui>
#include <QLineEdit>
#include <QPushButton>
#include <QLineEdit>
#include <QTreeView>
#include <QTableWidget>
#include <qpalette.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setLayout(w.layout);
    w.show();
    return a.exec();
}
