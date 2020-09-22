/*
Desarrollar un programa que lea los numeros de un vector
y determine el mayor elemento del vector
*/

#include<iostream>
using namespace std;

int main(){

    int vector[100];
    int nElementos, mayor=0;

    cout<<"Ingrese el numero de elementos:  ";
    cin>>nElementos;

    for(int i=0; i<nElementos; i++){

        cout<<"Ingresa un valor: ";
        cin>>vector[i];

        if(vector[i] > mayor){
            mayor = vector[i];
        }
    }

    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}