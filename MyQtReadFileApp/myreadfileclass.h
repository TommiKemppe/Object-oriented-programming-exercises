#ifndef MYREADFILECLASS_H
#define MYREADFILECLASS_H

#include <QObject>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>

using namespace std;

class MyReadFileClass : public QObject
{
    Q_OBJECT
public:
    MyReadFileClass(QObject *parent = nullptr);
    void raiseFinishProgramSignal();
    void readFile();

signals:
    void FinishProgram();

public slots:
};

#endif // MYREADFILECLASS_H
