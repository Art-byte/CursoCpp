#include<iostream>
using namespace std;

int main(){

    int numeros[] = {1,2,3,4,5};
    int inf, sup, mi, dato;
    char ban = 'F';

    dato = 4;
    inf = 0;
    sup = 5;
    
    while(inf <= sup){
        mi = (inf + sup) / 2;
        if(numeros[mi] == dato){
            ban = 'V';
            break;
        }
        if(numeros[mi] > dato){
            sup = mi;
            mi = (inf + sup) / 2;
        }
        if(numeros[mi] < dato){
            inf = mi;
            mi = (inf + sup)/2;
        }
    }


    if(ban == 'V'){
        cout<<"El numero ha sido encontrado en la posicion: "<<mi<<endl;
    }else{
        cout<<"El numero no existe en el arreglo"<<endl;
    }

    return 0;
}