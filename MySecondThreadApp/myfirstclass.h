#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H

#include <QThread>
#include <QDebug>

#include <iostream>

using namespace std;

class MyFirstClass : public QThread
{
protected:
    virtual void run() override;

public:
    MyFirstClass();
};

#endif // MYFIRSTCLASS_H
