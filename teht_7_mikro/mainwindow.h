#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QTimer>
#include <QMultimedia>
#include <QMediaPlayer>

#include "omalabel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void oveaKlikattu();

private slots:
    void on_dial_valueChanged(int value);
    void updateTime();

    void on_startButton_clicked();

    void on_stopButton_clicked();

    void on_openButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QLabel *labelMikronovi;
    QMediaPlayer *player;


    int aika;
    bool ajastinKaynnissa;
    bool oviAukiBool;

};

#endif // MAINWINDOW_H
