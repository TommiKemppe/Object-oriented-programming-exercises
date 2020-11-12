#ifndef MYTIMETOFILETHREADCLASS_H
#define MYTIMETOFILETHREADCLASS_H

#include <QThread>
#include <QDebug>
#include <QTime>
#include <QString>

class MyTimeToFileThreadClass : public QThread
{
protected:
    virtual void run() override;

public:

};

#endif // MYTIMETOFILETHREADCLASS_H
