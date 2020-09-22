//Crear un vector que lea la entrada de numeros y muestre en la salida los numeros con su respectivo indice
#include<iostream>
using namespace std;

int main(){

    int numeros[100], n;
    cout<<"Ingresa el tamanio del arreglo: ";
    cin>>n;

//Agregar al arreglo
    for(int i=0; i<n; i++){
        cout<<"Agrega un numero: ";
        cin>>numeros[i];
    }

//Mostrar el arreglo
    for(int i=0; i<n; i++){
        cout<<i<<": "<<numeros[i]<<endl;
    }


    return 0;
}