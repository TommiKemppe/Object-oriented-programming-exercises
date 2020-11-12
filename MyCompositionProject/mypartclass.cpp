#include "mypartclass.h"

MyPartClass::MyPartClass()
{
    myPartClassVariable = 15;
    cout << "Olio luotu luokkaan MyPartClass" << endl;
}

MyPartClass::~MyPartClass()
{
    cout << "Olio tuhottu luokasta MyPartClass" << endl;
}

void MyPartClass::MyPartClassFunction()
{
    cout << "Ollaan osaluokan MyPartClass jasenfunktiossa myPartClassFunction()" << endl;
}

short MyPartClass::mySecondPartClassFunction()
{
    return myPartClassVariable;
}
