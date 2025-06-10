#include <iostream>
using namespace std;

int main()
{
    int numero;

    do
    {
        cout << "adivina el numero" << endl;
        for(int i=0; i<1000; i++){
        cout<<"ingresa un numero del uno al 100 "<<i<< endl;
        cin>>numero;
       // cout << "ingresa un numero del uno al 100" << endl;
       // cin >> numero;

        if (numero < 15)
        {
            cout << "el numero que ingresaste es menor" << endl;
        }
        else if (numero > 15)
        {
            cout << "el numero que ingresaste es mayor" << endl;
        }
        else if (numero == 15)
        {
            cout << "Felicidades adivinaste el numero" << endl;
            return 0;
        }

    }} while (numero == 15);

    return 0;
}