#include<iostream>
using namespace std;

int main(){

    int n,suma=0,contador=1;

    cout<<"ingresa un numero"<<endl;
    cin>>n;

    while(contador<=n){
        if(contador%2==0){
        suma+=contador;
    
    }
    contador++;
}
    cout<<"la suma de todos los numeros pares desde 1 hasta "<<n<<" es: "<<suma<<endl;
    return 0;
}