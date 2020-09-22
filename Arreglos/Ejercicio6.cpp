/**
 * Crear un arreglo y comprobar si existe algun valor que equivalga
 * a la suma del resto de numeros del vector
*/

#include<iostream>
using namespace std;

int main(){

    int vector[5] = {1,2,3,4,10};
    int suma= 0, valor=0;;

    for(int i=0; i<5; i++){
        suma += vector[i];
        if(vector[i] > valor){
            valor = vector[i];
        }
    }

    if(valor == suma-valor){
        cout<<"El numero: "<<valor<<" es la suma de los demas";
    }else{
        cout<<"No existe ningun numero que sea la suma de los demas";
    }

    return 0;
}