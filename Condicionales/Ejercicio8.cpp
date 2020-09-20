//Ingresar tres numeros y luego agregar un 4 numero y comprobar si este coincide con alguno anterior

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    int extra;

    cout<<"Ingresa 3 numeros: ";
    cin>>num1>>num2>>num3;

    cout<<"Ingresa otro numero: ";
    cin>>extra;

    if(extra == num1 || extra == num2 || extra == num3){
        cout<<"El numero coincide con uno previamente ingresado"<<endl;
    }else{
        cout<<"El numero no coincide con ninguno previamente ingresado"<<endl;
    }

    return 0;
}