//Resolver a+b / c+d

#include<iostream>

using namespace std;

int main(){

    int a,b,c,d,calculo;

    cout<<"Ingresa el valor de a";
    cin>>a;
    cout<<"Ingresa el valor de b";
    cin>>b;
    cout<<"Ingresa el valor de c";
    cin>>c;
    cout<<"Ingresa el valor de d";
    cin>>d;

    calculo = (a+b)/(c+d);

    cout<<"El resultado es: "<<calculo<<endl;

    return 0;
}