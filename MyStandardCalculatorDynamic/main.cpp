#include "standardcalculator.h"

short StandardCalculator::kokonaislukuYksi = 10;
short StandardCalculator:: kokonaislukuKaksi = 5;
short StandardCalculator::tulos = 0;
char* StandardCalculator::merkki = " ";

int main()
{
    StandardCalculator *objectStandardCalculator;
    objectStandardCalculator = new StandardCalculator;
    objectStandardCalculator->summa();
    objectStandardCalculator->erotus();
    objectStandardCalculator->tulo();
    objectStandardCalculator->osamaara();

    return 0;
}
