#ifndef STANDARDCALCULATOR_H
#define STANDARDCALCULATOR_H

#include <iostream>

using namespace std;

class StandardCalculator
{
public:
    StandardCalculator();
    ~StandardCalculator();
    void summa() const
    {
        merkki = "+";
        tulos = kokonaislukuYksi + kokonaislukuKaksi;
        tulostus();
    }
    void erotus() const;
    void tulo() const;
    void osamaara() const;
    void tulostus() const;

private:
    static short kokonaislukuYksi;
    static short kokonaislukuKaksi;
    static short tulos;
    static char* merkki;
};

#endif // STANDARDCALCULATOR_H
