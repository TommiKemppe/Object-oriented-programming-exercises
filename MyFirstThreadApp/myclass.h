#ifndef MYCLASS_H
#define MYCLASS_H

#include <QThread>
#include<QDebug>
#include <iostream>

using namespace std;

class MyClass : public QThread
{
protected:
    virtual void run() override;

private:
    QString threadName;

public:
    MyClass(QString paramString);

};

#endif // MYCLASS_H
