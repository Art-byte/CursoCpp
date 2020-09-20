/*
Leer dos catetos de un triangulo rectangulo y escribir la salida de su hipotenusa
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float cat1, cat2, hipotenusa;

    cout<<"Ingresa el cateto 1";
    cin>>cat1;
    cout<<"Ingresa el cateto 2";
    cin>>cat2;

    hipotenusa = sqrt(pow(cat1,2) + pow(cat2,2));

    cout<<"La hipotenusa del rectangulo es: "<<hipotenusa<<endl;

    return 0;
}