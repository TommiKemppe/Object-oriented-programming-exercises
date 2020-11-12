#include <QCoreApplication>

#include "myfirstclass.h"
#include "mysecondclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyFirstClass *objectMyFirstClass = new MyFirstClass;
    MySecondClass *objectMySecondClass = new MySecondClass;

    objectMyFirstClass->start();
    objectMySecondClass->start();

    int execReturnValue;
    execReturnValue = a.exec();

    delete objectMyFirstClass;
    delete objectMySecondClass;
    objectMyFirstClass = nullptr;
    objectMySecondClass = nullptr;

    return execReturnValue;
}
