#include <QCoreApplication>
#include "myclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass *objectMyClass = new MyClass;
    QObject::connect(objectMyClass, SIGNAL(FinishProgram()), &a, SLOT(quit()), Qt::QueuedConnection);

    int execReturnValue;

    objectMyClass->raiseFinishProgramSignal();

    execReturnValue = a.exec();

    cout << "Sanomajonosta poistuttu, koska sinne saapui viesti quit()" << endl;

    delete objectMyClass;
    objectMyClass = nullptr;

    return execReturnValue;
}
