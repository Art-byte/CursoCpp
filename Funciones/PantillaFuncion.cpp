//Sacar el valor absoluto de un numero
#include<iostream>

using namespace std;

template <class T>
void mostrarAbsoluto(T numero);

int main(){

    int num1 = -13;
    float num2 = -32.4;
    double num3 = -323.212;

    mostrarAbsoluto(num1);
    mostrarAbsoluto(num2);
    mostrarAbsoluto(num3);

    return 0;
}

template <class T>
void mostrarAbsoluto(T numero){
    if(numero < 0){
        numero = numero * -1;
    }
    cout<<"Valor absoluto es: "<<numero<<endl;
}