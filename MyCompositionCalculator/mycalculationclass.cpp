#include "mycalculationclass.h"
#include "myuiclass.h"

MyCalculationClass::MyCalculationClass()
{

}
MyCalculationClass::~MyCalculationClass()
{

}

double MyCalculationClass::summa(double kokonaislukuYksi, double kokonaislukuKaksi)
{
    double tulos;
    tulos = kokonaislukuYksi + kokonaislukuKaksi;
    return tulos;
}

double MyCalculationClass::erotus(double kokonaislukuYksi, double kokonaislukuKaksi)
{
    double tulos;
    tulos = kokonaislukuYksi - kokonaislukuKaksi;
    return tulos;
}
double MyCalculationClass::tulo(double kokonaislukuYksi, double kokonaislukuKaksi)
{
    double tulos;
    tulos = kokonaislukuYksi * kokonaislukuKaksi;
    return tulos;
}
double MyCalculationClass::osamaara(double kokonaislukuYksi, double kokonaislukuKaksi)
{
    double tulos;
    tulos = kokonaislukuYksi / kokonaislukuKaksi;
    return tulos;
}
