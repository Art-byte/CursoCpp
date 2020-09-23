/**
 * perdir dos cadenas de caracteres de numeros, uno entero y otro real
 * convertirlos a sus respectivo valoes y sumarlos
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cad1[10];
    char cad2[10];

    int num1, suma;
    float num2;

    cout<<"Inserta un valor numerico: ";
    cin.getline(cad1, 10, '\n');
    cout<<"Inserta un valor decimal: ";
    cin.getline(cad2, 10, '\n');

    num1 = atoi(cad1);
    num2 = atof(cad2);

    suma = num1 + num2;

    cout<<"La suma de los valores es: "<<suma<<endl;

    return 0;
}