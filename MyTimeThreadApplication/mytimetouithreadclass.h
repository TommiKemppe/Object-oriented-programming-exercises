#ifndef MYTIMETOUITHREADCLASS_H
#define MYTIMETOUITHREADCLASS_H

#include <QThread>
#include <QDebug>
#include <QTime>
#include <QString>

class MyTimeToUIThreadClass : public QThread
{
protected:
    virtual void run() override;

public:

};

#endif // MYTIMETOUITHREADCLASS_H
