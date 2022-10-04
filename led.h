#ifndef LED_H
#define LED_H

#include <QMainWindow>
#include "myudp.h"

namespace Ui {
class Led;
}

class Led : public QMainWindow
{
    Q_OBJECT

public:
    explicit Led(QWidget *parent = 0);
    ~Led();
    void HelloUDP();

private slots:
    void on_button_red_clicked();
    void led_blink(int led, int length);
    void callback(int s);
    void readyRead();

private:
    Ui::Led *ui;
    int red;
    int pink;
    int time;
    QUdpSocket *socket;
};

#endif // LED_H
