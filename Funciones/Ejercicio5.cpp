/**
 * Intercambiar el valor de dos variables utilizando
 * el paso de parametros por referencia
 * 
*/

#include<iostream>
using namespace std;

void cambio(int&, int&);

int main(){

    int num1= 34, num2 = 54;

    cout<<"El valor del num1 es: "<<num1<<endl;
    cout<<"El valor del num2 es: "<<num2<<endl;

    cambio(num1, num2);


    cout<<"El nuevo valor del num1 es: "<<num1<<endl;
    cout<<"El nuevo valor del num2 es: "<<num2<<endl;


    return 0;
}

void cambio(int& n1, int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}