#include <iostream>
using namespace std;

int main()
{
    int n1,condicion=1;
    int arreglo[10];

    while (condicion > 0)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "ingresa un numero: " << i << endl;
            cin >> arreglo[i];
            if(arreglo[i]<0){
                condicion=arreglo[i];
                break;
            }

        }

    }
    return 0;
}