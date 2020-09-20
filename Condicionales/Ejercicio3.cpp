//Determinar si un numero es par o impar 

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Ingresa un numero: ";
    cin>>num;

    if(num%2==0){
        cout<<"Es par"<<endl;
    }else{
        cout<<"Es inpar"<<endl;
    }

    return 0;
}