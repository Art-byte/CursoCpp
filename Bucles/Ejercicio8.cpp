/*
Escribir un programa que calcule el valor de 1*2*3 hasta n Factorial
*/

#include<iostream>
using namespace std;

int main(){

    int n, factorial=1;

    cout<<"Ingresa el numero factorial que quieres: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }

    cout<<"Resultado: "<<factorial;

    return 0;
}