#ifndef STANDARDCALCULATOR_H
#define STANDARDCALCULATOR_H

#include <iostream>

using namespace std;


class StandardCalculator
{
private:
    int kokonaislukuYksi = 10;
    int kokonaislukuKaksi = 5;

public:
    void summaLaskuri();
    void erotusLaskuri();
    void tuloLaskuri();
    void osamaaraLaskuri();
    void laskutoimitusSumma(int parametriSumma);
    void laskutoimitusErotus(int parametriErotus);
    void laskutoimitusTulo(int parametriTulo);
    void laskutoimitusOsamaara(int parametriOsamaara);
};

#endif // STANDARDCALCULATOR_H
