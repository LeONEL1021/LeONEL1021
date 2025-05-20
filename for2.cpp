#include <iostream>
using namespace std;

int main()
{
    int n, modulo, primo = 1;
    cout << "ingresa un numero";
    cin >> n;

    for (int i = n - 1; i >= 2; i--)
    {
        modulo = (n % i);
        if (modulo == 0)
        {
            cout << "no es un numero primo";
            primo = 0;
            break;
        }
    }
    if (primo == 1)
    {
        cout << "es un numero primo";
    }

    return 0;
}