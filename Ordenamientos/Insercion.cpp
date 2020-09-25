#include<iostream>
using namespace std;

int main(){

    int numero[] = {4,5,2,7,4,3};
    int i, pos, aux;

    for(i=0; i<6; i++){
        pos = i;
        aux = numero[i];

        while((pos>0) && (numero[pos-1]>aux)){
            numero[pos] = numero[pos-1];
            pos--;
        }
        numero[pos] = aux;
    }

    cout<<"Orden ascendente: ";
    for(i=0; i<6; i++){
        cout<<numero[i]<<" "<<endl;
    }


    return 0;
}