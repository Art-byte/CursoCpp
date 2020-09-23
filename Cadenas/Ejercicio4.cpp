/**
 * Pedir al usuario una cadena de caracteres, guardarla en un arreglo
 * y copiar su contenido en otro arreglo de caracteres;
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cadena1[30];
    char cadena2[30];

    cout<<"Ingresa un dato: ";
    cin.getline(cadena1, 30, '\n');

    strcpy(cadena2, cadena1);
    cout<<"El dato que ingresaste es: "<<cadena2<<endl;

    return 0;
}