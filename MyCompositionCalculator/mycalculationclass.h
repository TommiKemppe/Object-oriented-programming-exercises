#ifndef MYCALCULATIONCLASS_H
#define MYCALCULATIONCLASS_H

#include <iostream>

using namespace std;

class MyCalculationClass
{
public:
    MyCalculationClass();
    ~MyCalculationClass();
    double summa(double kokonaislukuYksi, double kokonaislukuKaksi);
    double erotus(double kokonaislukuYksi, double kokonaislukuKaksi);
    double tulo(double kokonaislukuYksi, double kokonaislukuKaksi);
    double osamaara(double kokonaislukuYksi, double kokonaislukuKaksi);

private:

};

#endif // MYCALCULATIONCLASS_H
