#ifndef MYSECONDCLASS_H
#define MYSECONDCLASS_H

#include <QThread>
#include <QDebug>

#include <iostream>

using namespace std;

class MySecondClass : public QThread
{
protected:
    virtual void run() override;

public:
    MySecondClass();
};

#endif // MYSECONDCLASS_H
