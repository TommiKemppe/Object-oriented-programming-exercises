#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    cout << "Olio objectMyClass luotu" << endl;

    connect(this, SIGNAL(myFirstSignal()), this, SLOT(myFirstSlotFunction()), Qt::QueuedConnection);
    cout << "Signaali myFirstSignal() ylos" << endl;
    emit myFirstSignal();

}

MyClass::~MyClass()
{
    cout << "Olio objectMyClass tuhottu" << endl;
}

void MyClass::raiseFinishProgramSignal()
{
    cout << "Signaali finishProgram ylos" << endl;
    emit FinishProgram();
}

void MyClass::myFirstSlotFunction()
{
    cout << "Ollaan SLOT-jasenfunktiossa myFirstSlotFunction() koska signaali myFirstSignal() suoritettiin" << endl;
}
