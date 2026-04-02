#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss("D:/19624/QT/project/chat/Chat/style/stylesheet.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("open suceess");
        QString style = QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }
    else{
        qDebug("open fail");
    }

    MainWindow w;
    w.show();
    return a.exec();
}
