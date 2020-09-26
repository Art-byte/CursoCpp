#include<iostream>
using namespace std;

int main(){

    int array[]={3,4,2,1,5};
    int i, dato;
    char band = 'F';

    i=0;
    dato = 4;
    while((band == 'F') && (i<5)){
        if(array[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El dato no existe en el arreglo"<<endl;
    }else if(band == 'V'){
        cout<<"El numero existe dentro del arreglo en la posicion: "<<i-1<<endl;
    }

    return 0;
}