#include "myparentclass.h"

MyParentClass::MyParentClass()
{
    cout << "MyParentClass muodostinfunktio" << endl;
}

MyParentClass::~MyParentClass()
{
    cout << "MyParentClass tuhoajafunktio" << endl;
}

void MyParentClass::functionOne()
{
    cout << "MyParentClass virtual functionOne" << endl;
}

void MyParentClass::functionTwo()
{
    cout << "MyParentClass virtual functionTwo" << endl;
}
