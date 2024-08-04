#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{}

Widget::~Widget() {}

QSize Widget::sizeHint() const
{

    return QSize(1100, 700); // set the base size of window

}
