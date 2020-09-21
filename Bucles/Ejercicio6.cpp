/*
Hacer un programa que calcule la suma de n numeros dados por la consola
*/

#include<iostream>
using namespace std;

int main(){

    int numero, suma=0;

    cout<<"Hasta que numero quieres calcular?:  ";
    cin>>numero;

    for(int i=0; i<=numero; i++){
        suma += i;
    }

    cout<<"Valor de la suma: "<<suma;

    return 0;
}