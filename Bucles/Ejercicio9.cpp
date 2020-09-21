//Elaborar un programa que haga la suma de numeros factoriales 

#include<iostream>
using namespace std;

int main(){

    int n, suma=0, factorial=1;

    cout<<"Ingresa hasta donde quieres llegar: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        factorial *= i;
        suma += factorial;
    }

    cout<<"Suma de numeros factoriales: "<<suma<<endl;

    return 0;
}