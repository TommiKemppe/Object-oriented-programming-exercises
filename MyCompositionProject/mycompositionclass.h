#ifndef MYCOMPOSITIONCLASS_H
#define MYCOMPOSITIONCLASS_H

#include <iostream>
#include "mypartclass.h"

using namespace std;

class MyCompositionClass
{
public:
    MyCompositionClass();
    ~MyCompositionClass();
private:
    //MyPartClass objectMyPartClass;
    MyPartClass *objectMyPartClass;
};

#endif // MYCOMPOSITIONCLASS_H
