#include "standardcalculator.h"

void StandardCalculator::laskutoimitusSumma(int parametriSumma)
{
    cout << kokonaislukuYksi << " + " << kokonaislukuKaksi << " = " << parametriSumma << endl;
}

void StandardCalculator::laskutoimitusErotus(int parametriErotus)
{
    cout << kokonaislukuYksi << " - " << kokonaislukuKaksi << " = " << parametriErotus << endl;
}

void StandardCalculator::laskutoimitusTulo(int parametriTulo)
{
    cout << kokonaislukuYksi << " * " << kokonaislukuKaksi << " = " << parametriTulo << endl;
}

void StandardCalculator::laskutoimitusOsamaara(int parametriOsamaara)
{
    cout << kokonaislukuYksi << " / " << kokonaislukuKaksi << " = " << parametriOsamaara << endl;
}

void StandardCalculator::summaLaskuri()
{
    int summa;
    summa = kokonaislukuYksi + kokonaislukuKaksi;
    laskutoimitusSumma(summa);
}

void StandardCalculator::erotusLaskuri()
{
    int erotus;
    erotus = kokonaislukuYksi - kokonaislukuKaksi;
    laskutoimitusErotus(erotus);
}

void StandardCalculator::tuloLaskuri()
{
    int tulo;
    tulo = kokonaislukuYksi * kokonaislukuKaksi;
    laskutoimitusTulo(tulo);
}

void StandardCalculator::osamaaraLaskuri()
{
    int osamaara;
    osamaara = kokonaislukuYksi / kokonaislukuKaksi;
    laskutoimitusOsamaara(osamaara);
}
