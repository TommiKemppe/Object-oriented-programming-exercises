#include "printdata.h"

void PrintData::print(int kokonaislukuParametri)
{
    cout << "kokonaisluku on: " << kokonaislukuParametri << endl;
}

void PrintData::print(double desimaalilukuParametri)
{
    cout << "desimaaliluku on: " << desimaalilukuParametri << endl;
}

void PrintData::print(char* merkkijonoParametri)
{
    cout << "merkkijono on: " << merkkijonoParametri << endl;
}
