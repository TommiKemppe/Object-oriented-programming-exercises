#include "mycompositionclass.h"

MyCompositionClass::MyCompositionClass()
{
    cout << "Olio luotu luokkaan MyCompositionClass" << endl;
    // objectMyPartClass.MyPartClassFunction();
    // cout << "Osaluokan jasenmuuttuja myPartClassVariable = " << objectMyPartClass.mySecondPartClassFunction() << endl;
    objectMyPartClass = new MyPartClass;

    objectMyPartClass->MyPartClassFunction();
    cout << "Osaluokan jasenmuuttuja myPartClassVariable = " << objectMyPartClass->mySecondPartClassFunction() << endl;
}

MyCompositionClass::~MyCompositionClass()
{
    cout << "Olio tuhottu luokasta MyCompositionClass" << endl;
    delete objectMyPartClass;
    objectMyPartClass = nullptr;
}
