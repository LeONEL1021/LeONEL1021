#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    cout << "el viernes 20 de junio es asueto" << endl;
    cout << "vamos a impimir numeros" << endl;
    do
    {

        cout << "imprimir enteros: " << numero;
        cout << endl;
        numero++;

    } while (numero <= 15);

    return 0;
}