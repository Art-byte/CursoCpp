// Hacer un programa que calcule el resultado de 1-2+3-4+5-5...n

#include<iostream>

using namespace std;

int main(){

    int n, par=0, impar=0, negativo=0, suma=0;

    cout<<"Ingresa el numero: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            negativo = i * -1;
            par += negativo;
        }else{
            impar += i;
        }

    }

    suma = par  + impar;

    cout<<suma<<endl;

    return 0;
}