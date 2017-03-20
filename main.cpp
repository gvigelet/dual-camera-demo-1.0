#include <qglobal.h>
#include <QLabel>

#if QT_VERSION < 0x050000
#include <QWSServer>
#endif


#include <QPushButton>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w(NULL, &a);

#if QT_VERSION < 0x050000
	QWSServer::setBackground(QBrush(QColor(0, 0, 0, 0)));
#endif

    w.show();
    return a.exec();
}

