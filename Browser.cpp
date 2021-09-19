#include "Browser.h"
#include<QPushButton>
#include<QVBoxLayout>

Browser::Browser(QWidget *parent): QWidget(parent), webEngine(new QWebEngineView(this))
{
    QPushButton *homeButton= new QPushButton("Home", this);
    homeButton->setFixedSize(100,30);

    webEngine->setFixedSize(640,360);

    QVBoxLayout *vLayout=new QVBoxLayout(this);
    vLayout->addWidget(homeButton,0,Qt::AlignCenter);
    vLayout->addWidget(webEngine,0,Qt::AlignCenter);

    connect(homeButton, &QPushButton::clicked, this, &Browser::buttonClick);

    buttonClick();
}

void Browser::buttonClick()
{
    webEngine->load(QUrl("http://skydns.ru/home"));
}
