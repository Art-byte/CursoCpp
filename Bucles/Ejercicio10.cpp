/*
Escribir un programa que calcule el valor de un numero elevado al cuadrado hasta n
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, suma = 0, elevacion=1;

    cout<<"Ingresa el valor limite: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        elevacion = pow(2,i);
        suma += elevacion;
    }

    cout<<"Total: "<<suma<<endl;


    return 0;
}