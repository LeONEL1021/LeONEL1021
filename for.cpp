#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "ingresa un numero par";
    cin >> numero;
    if (numero == 0)
    {
        cout << "numero invalido";
    }
    else
    {

        for (int i = 2; i < numero; i += 2)
        {
            cout << " " << numero - i << "\n";
        }
    }
    return 0;
}