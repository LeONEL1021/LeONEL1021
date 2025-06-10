#include <iostream>
using namespace std;
int main(){
    int numero,suma=0;

while (true) {
        cout << "Ingresa un número (negativo para terminar): ";
        cin >> numero;

        if (numero < 0) {
            break;  // Termina el bucle si el número es negativo
        }

        suma += numero;  // Suma solo si el número es positivo
    }

    cout << "La suma de los números ingresados es: " << suma << endl;

    return 0;
}