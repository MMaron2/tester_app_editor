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

    // main grid layout
    w.layout = new QGridLayout;
    w.layout->setSpacing(0);
    w.layout->setContentsMargins(0,0,0,0);
    // ----------------------------------

    // main widget frames
    QFrame *header = new QFrame;
    header->setMaximumHeight(125);

    QFrame *sidebard = new QFrame;
    sidebard->setMaximumWidth(300);

    QFrame *content = new QFrame;
    // -------------------------------

    // palette for all containers
    header->setAutoFillBackground(true);
    sidebard->setAutoFillBackground(true);
    content->setAutoFillBackground(true);

    QPalette palette1 = header->palette();
    palette1.setColor(QPalette::Window, "#272727");
    header->setPalette(palette1);

    QPalette palette2 = sidebard->palette();
    palette2.setColor(QPalette::Window, "#2F2F2F");
    sidebard->setPalette(palette2);

    QPalette palette3 = sidebard->palette();
    palette3.setColor(QPalette::Window, "#B0B0B0");
    content->setPalette(palette3);

    w.layout->addWidget(header, 0,0,1,-1);
    w.layout->addWidget(sidebard, 1,0,4,1);
    w.layout->addWidget(content, 1,1,-1,4);
    // ----------------------------------------------

    // header layout and widgets
    QGridLayout *headerGridLayout = new QGridLayout;
    QPushButton *openDatabaseButton = new QPushButton("Otwórz bazę");
    QLabel *databaseName = new QLabel("Baza");
    QPushButton *newDatabaseButton = new QPushButton("Nowa Baza");

    headerGridLayout->addWidget(databaseName, 0, 0, 1, 4);
    headerGridLayout->addWidget(openDatabaseButton,0, 5);
    headerGridLayout->addWidget(newDatabaseButton, 0, 6);
    header->setLayout(headerGridLayout);

    // sidebar layout and widgets
    QGridLayout *sidebarGridLayout = new QGridLayout;
    QTreeView *fileExplorer = new QTreeView;
    QLineEdit *fileExplorerSearchBar = new QLineEdit("wyszukaj");

    sidebarGridLayout->addWidget(fileExplorerSearchBar);
    sidebarGridLayout->addWidget(fileExplorer);

    sidebard->setLayout(sidebarGridLayout);

    // main contetn layout and widgets
    QGridLayout *mainContentGridLayout = new QGridLayout;
    QLabel *questionLabel = new QLabel("miejsce na pytanie");
    questionLabel->setMinimumHeight(250);
    questionLabel->setMinimumWidth(350);

    QLabel *imageLabel = new QLabel("miejsce na zdjęcie");
    imageLabel->setMinimumHeight(250);
    imageLabel->setMinimumWidth(350);

    QTableWidget *answersTable = new QTableWidget;

    QPushButton *addNewQuestionButton = new QPushButton("dodaj nowe");
    QPushButton *saveQuestionPushButton = new QPushButton("zapisz");


    mainContentGridLayout->addWidget(questionLabel,0,0);
    mainContentGridLayout->addWidget(imageLabel,0,1);
    mainContentGridLayout->addWidget(answersTable,1,0,1,-1);
    mainContentGridLayout->addWidget(addNewQuestionButton,2,0);
    mainContentGridLayout->addWidget(saveQuestionPushButton,2,1);
    content->setLayout(mainContentGridLayout);


    w.setLayout(w.layout);
    w.show();
    return a.exec();
}
