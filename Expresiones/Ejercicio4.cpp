//Hacer un intercambio de valores 

#include<iostream>

using namespace std;

int main(){

    int x, y , aux;

    cout<<"Ingresar x: ";
    cin>>x;

    cout<<"Ingresar y: ";
    cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"Nuevo x: "<<x<<endl;
    cout<<"Nuevo y: "<<y<<endl;

    return 0;

}