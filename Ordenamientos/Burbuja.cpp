#include<iostream>
using namespace std;

int main(){

    int array[] = {1,5,4,2,3};
    int i, j, aux;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    cout<<"Orden ascendente: "<<endl;
    for(i=0; i<5; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}