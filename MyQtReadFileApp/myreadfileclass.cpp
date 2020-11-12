#include "myreadfileclass.h"

MyReadFileClass::MyReadFileClass(QObject *parent) : QObject(parent)
{

}

void MyReadFileClass::raiseFinishProgramSignal()
{
    cout << "Signaali finishProgram ylos" << endl;
    emit FinishProgram();
}

void MyReadFileClass::readFile()
{
    QFile file ("C:/Temp/myFile.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        qDebug() << line;
    }
    raiseFinishProgramSignal();
}
