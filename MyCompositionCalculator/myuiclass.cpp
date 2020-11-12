#include "myuiclass.h"
#include "mycalculationclass.h"

MyUiClass::MyUiClass()
{

}
MyUiClass::~MyUiClass()
{

}

void MyUiClass::inputNumbers()
{
    cout << "Anna luku yksi: ";
    cin >> numberOne;
    cout << "Anna luku kaksi: ";
    cin >> numberTwo;
    cout << endl;
    switch(menuVariable)
    {
    case 1:
        result = objectMyCalculationClass.summa(numberOne, numberTwo);
        showResult();
        break;
    case 2:
        result = objectMyCalculationClass.erotus(numberOne, numberTwo);
        showResult();
        break;
    case 3:
        result = objectMyCalculationClass.tulo(numberOne, numberTwo);
        showResult();
        break;
    case 4:
        result = objectMyCalculationClass.osamaara(numberOne, numberTwo);
        showResult();
        break;
    }
}

void MyUiClass::showMenu()
{
    while(menuVariable != 5)
    {
        cout << "NELILASKIN" << endl;
        cout << "==========" << endl;
        cout << "1 = summa" << endl;
        cout << "2 = erotus" << endl;
        cout << "3 = tulo" << endl;
        cout << "4 = osamaara" << endl;
        cout << "5 = lopeta" << endl;
        cout << "Valitse: ";
        cin >> menuVariable;
        cout << endl;
        if (menuVariable != 5)
        {
            inputNumbers();
        }
    }
}

void MyUiClass::showResult()
{
    switch(menuVariable)
    {
    case 1:
        cout << "Laskutoimitus ja tulos: " << endl;
        cout << numberOne << " + " << numberTwo << " = " << result << endl;
        break;
    case 2:
        cout << "Laskutoimitus ja tulos: " << endl;
        cout << numberOne << " - " << numberTwo << " = " << result << endl;
        break;
    case 3:
        cout << "Laskutoimitus ja tulos: " << endl;
        cout << numberOne << " * " << numberTwo << " = " << result << endl;
        break;
    case 4:
        cout << "Laskutoimitus ja tulos: " << endl;
        cout << numberOne << " / " << numberTwo << " = " << result << endl;
        break;
    }
    cout << endl;
}
