#ifndef BROWSER_H
#define BROWSER_H

#include <QWidget>
#include <QWebEngineView>

class Browser: public QWidget
{
    QWebEngineView *webEngine;

    //Нажатие кнопки
    void buttonClick();

public:
    Browser(QWidget *parent=nullptr);
};

#endif // BROWSER_H
