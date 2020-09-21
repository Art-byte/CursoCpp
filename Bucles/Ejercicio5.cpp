/*
escribir un programa que calcules una potencia
sin usar la funcion pow
*/
#include<iostream>
using namespace std;

int main(){

    int x, y, elevacion= 1;

    cout<<"Ingresa el valor de x";
    cin>>x;
    cout<<"Ingresa el valor de y";
    cin>>y;

    for(int i=1; i<=y; i++){
        elevacion *= x;
    }

    cout<<"La potencia es: "<<elevacion;

    return 0;
}