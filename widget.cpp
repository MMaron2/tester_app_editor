#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QGridLayout;
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);


    // main widget frames
    header = new QFrame;
    header->setMaximumHeight(125);

    sidebard = new QFrame;
    sidebard->setMaximumWidth(300);

    content = new QFrame;

    layout->addWidget(header, 0,0,1,-1);
    layout->addWidget(sidebard, 1,0,4,1);
    layout->addWidget(content, 1,1,-1,4);
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


    // header layout and widgets
    headerGridLayout = new QGridLayout;
    openDatabaseButton = new QPushButton("Otwórz bazę");
    databaseName = new QLabel("Baza");
    newDatabaseButton = new QPushButton("Nowa Baza");

    headerGridLayout->addWidget(databaseName, 0, 0, 1, 4);
    headerGridLayout->addWidget(openDatabaseButton,0, 5);
    headerGridLayout->addWidget(newDatabaseButton, 0, 6);
    header->setLayout(headerGridLayout);

    // sidebar layout and widgets
    sidebarGridLayout = new QGridLayout;
    fileExplorer = new QTreeView;
    fileExplorerSearchBar = new QLineEdit("wyszukaj");

    sidebarGridLayout->addWidget(fileExplorerSearchBar);
    sidebarGridLayout->addWidget(fileExplorer);

    sidebard->setLayout(sidebarGridLayout);

    // main contetn layout and widgets
    mainContentGridLayout = new QGridLayout;
    questionLabel = new QLabel("miejsce na pytanie");
    questionLabel->setMinimumHeight(250);
    questionLabel->setMinimumWidth(350);

    imageLabel = new QLabel("miejsce na zdjęcie");
    imageLabel->setMinimumHeight(250);
    imageLabel->setMinimumWidth(350);

    answersTable = new QTableWidget;

    addNewQuestionButton = new QPushButton("dodaj nowe");
    saveQuestionPushButton = new QPushButton("zapisz");

    mainContentGridLayout->addWidget(questionLabel,0,0);
    mainContentGridLayout->addWidget(imageLabel,0,1);
    mainContentGridLayout->addWidget(answersTable,1,0,1,-1);
    mainContentGridLayout->addWidget(addNewQuestionButton,2,0);
    mainContentGridLayout->addWidget(saveQuestionPushButton,2,1);
    content->setLayout(mainContentGridLayout);

}

Widget::~Widget() {


}

QSize Widget::sizeHint() const
{

    return QSize(1100, 700); // set the base size of window

}
