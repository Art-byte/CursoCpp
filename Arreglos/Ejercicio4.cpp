//Crear un vector que muestre en orden inverso

#include<iostream>
using namespace std;

int main(){

    int vector[5] ={1,2,3,4,5};

    for(int i=4; i>=0; i--){
        cout<<vector[i]<<endl;
    }


    return 0;
}