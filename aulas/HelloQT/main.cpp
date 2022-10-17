#include <QApplication>
//#include <QLabel>
//#include <QPushButton>
#include <QtWidgets>
#include "helloqt.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    HelloQT *janela = new HelloQT(&app);
    janela->show();

    return app.exec();
}
