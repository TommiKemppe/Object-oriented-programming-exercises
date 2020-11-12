#include "standardcalculator.h"

StandardCalculator::StandardCalculator()
{
    cout << "Olio luotu luokkaan StandardCalculator" << endl;
}

StandardCalculator::~StandardCalculator()
{
    cout << "Olio tuhottu luokasta StandardCalculator" << endl;
}

/*
void StandardCalculator::summa()
{
    kokonaislukuYksi = 10;
    kokonaislukuKaksi = 5;
    merkki = "+";
    tulos = kokonaislukuYksi + kokonaislukuKaksi;
    tulostus();
}
*/

void StandardCalculator::erotus() const
{
    tulos = kokonaislukuYksi - kokonaislukuKaksi;
    merkki = "-";
    tulostus();
}

void StandardCalculator::tulo() const
{
    tulos = kokonaislukuYksi * kokonaislukuKaksi;
    merkki = "*";
    tulostus();
}

void StandardCalculator::osamaara() const
{
    tulos = kokonaislukuYksi / kokonaislukuKaksi;
    merkki = "/";
    tulostus();
}

void StandardCalculator::tulostus() const
{
    cout << kokonaislukuYksi << merkki << kokonaislukuKaksi << "=" << tulos << endl;
}
