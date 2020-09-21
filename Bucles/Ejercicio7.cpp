/*
escribir un programa que calcule 
el valor de n numero  2n-1
*/

#include<iostream>
using namespace std;

int main(){

    int numero, suma=0;

    cout<<"Inserta hasta donde quieres calcular: ";
    cin>>numero;

    for(int i=1; i<=2*numero-1; i+=2){

        suma += i;
    }

    cout<<"Total de los numeros: "<<suma<<endl;

    return 0;
}