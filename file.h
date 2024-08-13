#ifndef FILE_H
#define FILE_H

#include <QWidget>
#include <map>

class File : public QWidget
{

public:


    File();
    static QString get_path();
    QString get_name();
    QString get_image_path();
    std::map<QString, bool> get_answers();
    ~File();

private:

    QString path;
    QString name;
    QString image_path;
    std::map<QString, bool> answers;

private slots:

};

#endif // FILE_H
