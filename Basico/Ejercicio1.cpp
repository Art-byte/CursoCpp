#include<iostream>

using namespace std;

int main(){

    int numero;
    cout<<"Ingrese el numero: ";

    cin>>numero;

    int iva = numero * 0.16;
    cout<<"El costo con iva es de: "<<iva <<endl;

    return 0;
}