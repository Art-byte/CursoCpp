//Escribir un programa que calcule usando la formula general


#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a, b, c, r1, r2;
    cout<<"Ingresa el valor a: ";
    cin>>a;
    cout<<"Ingresa el valor de b: ";
    cin>>b;
    cout<<"Ingresa el valor de c: ";
    cin>>c;

    r1 = (-b + sqrt(pow(b,2) -4*a*c))/ (2 * a);
    r2 = (-b - sqrt(pow(b,2) -4*a*c))/ (2 * a);

    cout<<"Resultado 1: "<<r1<<endl;
    cout<<"Resultado 2: "<<r2<<endl;

    return 0; 
}