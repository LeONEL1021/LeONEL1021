#include <iostream>
using namespace std;

int main (){
    float notas2[5];
    for(int i=0; i<5; i++){
        //uso for para ir pidiendo las notas de 1 en 1
        cout<<"ingresa la nota "<<i+1<< endl;
        cin>>notas2[i];
    }
    //todas las notas en orden 
    //for(int i=0; i<5; i++){
    //cout<<"todas las notas: "<<notas2[i] <<endl;

    

    for(int i=4; i>=0; i--){
        cout<<"todas las notas: "<<notas2[i]<<endl;
    }




    return 0;
}