/**
 * Definir dos vectores de caracteres y despues almacenar el contenido de ambos en un tercer vector
 * situando en primer lugar los elementos del primer vector y seguido de los elementos del segundo
 * vector. y mostrar el contenido del nuevo vector
*/
#include<iostream>
using namespace std;

int main(){

    char mensaje[] = {'a','b','c','d', 'g'};
    char mensaje2[] ={ 'r','e','u','s','g'};
    char nuevoVector[10];

    for(int i=0; i<5; i++){
        nuevoVector[i] = mensaje[i];
    }

    for(int i=5; i<10; i++){
        nuevoVector[i] = mensaje2[i-5];
    }

    cout<<"Datos del nuevo vector: "<<endl;

    for(int i=0; i<10; i++){
        cout<<" "<<nuevoVector[i];
    }



    return 0;
}