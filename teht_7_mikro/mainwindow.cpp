#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "omalabel.h"
#include <QPixmap>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    aika = 0;
    ajastinKaynnissa = false;

    this->connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->setInterval(1000);

    labelMikronovi = new omaLabel("", this);
    const QPixmap ovi_kiinni_kuva("C:/mikroMateriaali/mikrokiinni.jpg");
    labelMikronovi->setPixmap(ovi_kiinni_kuva);
    labelMikronovi->resize(600, 400);
    labelMikronovi->move(24,64);
    const QPixmap skaalattu_kuva = ovi_kiinni_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
    labelMikronovi->setPixmap(skaalattu_kuva);
    QObject::connect(labelMikronovi, SIGNAL(clicked()), this, SLOT(oveaKlikattu()));
    oviAukiBool = false;

    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/mikroMateriaali/mikro.mp3"));
    player->setVolume(50);
}


MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
    delete labelMikronovi;
    delete player;
}

void MainWindow::on_dial_valueChanged(int value)
{
    aika = value;
    ui->lcdNumber->display(aika);
}

void MainWindow::updateTime()
{
    if (aika >0)
    {
        aika--;
        ui->lcdNumber->display(aika);
        ui->dial->setValue(aika);
        qDebug() << "funktiossa updateTime(), jasenmuuttuja aika on " << aika << endl;
        if(aika == 0)
        {
            player->play();
        }
    }
    else
    {
        timer->stop();
        ajastinKaynnissa = false;
    }
}

void MainWindow::on_startButton_clicked()
{
    if(ajastinKaynnissa == false && oviAukiBool == false)
    {
        ajastinKaynnissa = true;
        timer->start();
    }
    else
    {

    }
}

void MainWindow::on_stopButton_clicked()
{
    if(ajastinKaynnissa == true)
    {
        timer->stop();
        ajastinKaynnissa = false;
        //aika = 0;
        //ui->lcdNumber->display(aika);
    }
    else
    {
        aika = 0;
        ui->lcdNumber->display(aika);
        ui->dial->setValue(aika);
    }
}

void MainWindow::oveaKlikattu()
{
    if(oviAukiBool == false)
    {
        qDebug() << "ovea klikattu" << endl;
        const QPixmap ovi_auki_kuva("C:/mikroMateriaali/mikroauki.jpg");
        const QPixmap skaalattu_kuva = ovi_auki_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
        labelMikronovi->setPixmap(skaalattu_kuva);
        ajastinKaynnissa = false;
        timer->stop();
        oviAukiBool = true;
    }
    else
    {
        qDebug() << "ovea klikattu" << endl;
        const QPixmap ovi_kiinni_kuva("C:/mikroMateriaali/mikrokiinni.jpg");
        const QPixmap skaalattu_kuva = ovi_kiinni_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
        labelMikronovi->setPixmap(skaalattu_kuva);

        oviAukiBool = false;
    }
}

void MainWindow::on_openButton_clicked()
{
    qDebug() << "Avaa-napia klikattu" << endl;
    const QPixmap ovi_auki_kuva("C:/mikroMateriaali/mikroauki.jpg");
    const QPixmap skaalattu_kuva = ovi_auki_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
    labelMikronovi->setPixmap(skaalattu_kuva);
    ajastinKaynnissa = false;
    timer->stop();
    oviAukiBool = true;
}
