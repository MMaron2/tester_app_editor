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
#include <QFileDialog>
#include <QMessageBox>
#include <QListWidget>
#include "file.h"
#include <vector>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QGridLayout *layout;


public slots:

private slots:
    void on_openDatabaseButton();
    void on_newDatabaseButton();
    void on_addNewQuestionButton();
    void on_saveQuestionPushButton();

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
    QListWidget*fileExplorer;
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


    // temp value and function
    std::vector<File> file_list;
    void create_file(QString path);

};
#endif // WIDGET_H
