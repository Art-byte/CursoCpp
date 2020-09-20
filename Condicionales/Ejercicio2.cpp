//Pedir tres numeros y ver cual es el mayor
#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"Ingresa tres valores";
    cin>>num1>>num2>>num3;

    if((num1>num2)&& (num1>num3)){
        cout<<"El mayor es: "<<num1;
    }else if((num2 > num1) && (num2 > num3)){
        cout<<"El mayor es: "<<num2;
    }else if((num3>num1) && (num3>num2)){
        cout<<"El mayor es: "<<num3;
    }
    

    return 0;
}