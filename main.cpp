#include "led.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Led w;
    w.show();

    MyUDP client;

    client.HelloUDP();

    return a.exec();
}
