#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
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

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QGridLayout *layout;


public slots:

private slots:

private:
    // set base size of main window
    QSize sizeHint() const;

    // widgets
    QFrame *header;
    QFrame *sidebard;
    QFrame *content;

    // header widgets
    QPushButton *openDatabaseButton;
    QLabel *databaseName;
    QPushButton *newDatabaseButton;

    // sidebar widgets
    QTreeView *fileExplorer;
    QLineEdit *fileExplorerSearchBar;

    // main content widgets
    QLabel *questionLabel;
    QLabel *imageLabel;
    QTableWidget *answersTable;
    QPushButton *addNewQuestionButton;
    QPushButton *saveQuestionPushButton;


    // layouts
    QGridLayout *sidebarGridLayout;
    QGridLayout *headerGridLayout;
    QGridLayout *mainContentGridLayout;
};
#endif // WIDGET_H
