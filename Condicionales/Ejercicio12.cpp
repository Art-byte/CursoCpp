/*
Hacer un menu que pisa sacar el cubo de un numero
ver si es un numero par o inpar 
y salir

*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num1, opcion;
    int resultado;

    cout<<"Bienvenido"<<endl;
    cout<<"1. Calcular cubo"<<endl;
    cout<<"2. Numero par o inpar"<<endl;
    cout<<"3. salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Ingresa un numero: ";
            cin>>num1;
            resultado = pow(num1,3);
            cout<<"El cubo del numero es: "<<resultado;
            break;

        case 2:
            cout<<"Ingresa un numero: ";
            cin>>num1;
            if(num1%2==0){
                cout<<"El numero es par";
            }else{
                cout<<"El numero es impar";
            }
            break;

        case 3:
            break;
    }

    return 0;
}