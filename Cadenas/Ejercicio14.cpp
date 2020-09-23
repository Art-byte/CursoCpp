/**
 * Transformar una cadena a numeros
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cad[] = "12312";
    int numero;

    //Dependiendo del tipo de dato al que quieras convertir varia
    numero = atoi(cad); 

    cout<<numero<<endl;

    return 0;
}