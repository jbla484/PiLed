#include "led.h"
#include "ui_led.h"
#include <wiringPi.h>
#include <csignal>

Led::Led(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Led)
{
    ui->setupUi(this);

    if (wiringPiSetup()==-1)
    {
        return;
    }

    wiringPiSetupGpio();

    red = 18, pink = 27;

    pinMode(red, OUTPUT);
    pinMode(pink, OUTPUT);
}

Led::~Led()
{
    delete ui;
}

void Led::on_button_red_clicked()
{
    time = 250;
    led_blink(red, time);
}

void Led::led_blink(int led, int length)
{
    digitalWrite(led, HIGH);
    delay(length);
    digitalWrite(led, LOW);
    delay(length);
}
