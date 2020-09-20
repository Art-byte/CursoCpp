//Hacer la siguiente expresion a+ b/c-d


#include<iostream>
using namespace std;

int main(){

    double a, b, c, d, resultado;

    cout<<"Ingresa a: "; cin>>a;
    cout<<"Ingresa b: "; cin>>b;
    cout<<"Ingresa c: "; cin>>c;
    cout<<"Ingresa d: "; cin>>d;

    resultado = a + b/(c-d); 

    cout<<"El resutlado es: "<<resultado<<endl;
    return 0;
}