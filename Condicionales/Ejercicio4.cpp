/*Comprobar si un numero es positivo o negativo
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Ingresa un numero: ";
    cin>>num;

    if(num < 0){
        cout<<"El numero es negativo";
    }else{
        cout<<"El numero es positivo";
    }

    return 0;
}