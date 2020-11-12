#include "mytimetouithreadclass.h"

void MyTimeToUIThreadClass::run()
{
    QTime systemTime;
    timeString = systemTime.currentTime();
    //QString timeString = "systemTime.currentTime()"
    QDebug() << systemTime.currentTime();
}
