#ifndef MYUICLASS_H
#define MYUICLASS_H

#include "mycalculationclass.h"

class MyUiClass
{
public:
    MyUiClass();
    ~MyUiClass();
    void inputNumbers();
    void showMenu();
    void showResult();

private:
    MyCalculationClass objectMyCalculationClass;
    double numberOne, numberTwo, result;
    short menuVariable;
};

#endif // MYUICLASS_H
