//Hacer la siguiente expresion: a+ a/c / d+ e/f


#include<iostream>
using namespace std;

int main(){

    int a,b,c,d,e,f, calculo;

    cout<<"Ingresa a: "; cin>>a;
    cout<<"Ingresa b: "; cin>>b;
    cout<<"Ingresa c: "; cin>>c;
    cout<<"Ingresa d: "; cin>>d;
    cout<<"Ingresa e: "; cin>>e;
    cout<<"Ingresa f: "; cin>>f;

    calculo = (a + (b/c))/(d + e/f);
    cout<<"El valor final es: "<<calculo<<endl;

    return 0;
}