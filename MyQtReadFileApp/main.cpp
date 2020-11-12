#include <QCoreApplication>
#include "myreadfileclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //MyClass *objectMyClass = new MyClass;
    //QObject::connect(objectMyClass, SIGNAL(FinishProgram()), &a, SLOT(quit()), Qt::QueuedConnection);

    MyReadFileClass * objectMyReadFileClass = new MyReadFileClass;
    QObject::connect(objectMyReadFileClass, SIGNAL(FinishProgram()), &a, SLOT(quit()), Qt::QueuedConnection);

    int execReturnValue;
    objectMyReadFileClass->readFile();

    execReturnValue = a.exec();

    delete objectMyReadFileClass;
    objectMyReadFileClass = nullptr;
    return execReturnValue;
}
