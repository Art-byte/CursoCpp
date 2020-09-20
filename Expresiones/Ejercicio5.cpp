// Leer una nota de cuatro alumnos y calcular la nota final media de los cuatro alumnos

#include<iostream>

using namespace std;

int main(){

    double a1,a2,a3,a4;
    double total;

    cout<<"Ingrese primera nota: ";  
    cin>>a1; 
    cout<<"Ingrese segunda nota: ";
    cin>>a2;
    cout<<"Ingrese tercera nota: ";
    cin>>a3;
    cout<<"Ingrese cuarta nota: ";
    cin>>a4;

    total = (a1+a2+a3+a4)/4;
    cout.precision(2);
    cout<<"La nota media es de: "<<total<<endl;

    return 0;
}