#ifndef MYCLASS_H
#define MYCLASS_H

#include <QDebug>
#include <QString>
#include <QList>
#include <QStack>
#include <QDir>

#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass();
    ~MyClass();
    void printMyList();
    void printMyStack();
    void printMyDirectoryContent();
};

#endif // MYCLASS_H
