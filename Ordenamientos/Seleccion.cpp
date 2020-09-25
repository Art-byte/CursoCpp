#include<iostream>
using namespace std;

int main(){

    int array[] = {3,1,5,4,2};
    int i, j, aux, min;

    for(i=0; i<5; i++){
        min = i;
        for(j=i+1; j<5; j++){
            if(array[j] < array[min]){
                min = j;

            }
        }
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }

    cout<<"Ordenamiento: "<<endl;
    for(i=0; i<5; i++){
        cout<<array[i]<<endl;
    }

    return 0;
}