//Hacer un programa para la expresion a/b + 1

#include<iostream>

using namespace std;

int main(){

    int a, b, calculo;

    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"Ingresa el valor de b: ";
    cin>>b;

    calculo = a/b + 1;

    cout<<"El resultado es: "<<calculo<<endl;

    return 0;
}