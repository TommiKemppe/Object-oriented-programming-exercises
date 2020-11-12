#include <QCoreApplication>
#include "mytimetofilethreadclass.h"
#include "mytimetouithreadclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTimeToUIThreadClass objectMyTimeToUIThreadClass;
    objectMyTimeToUIThreadClass.start();

    return a.exec();
}
