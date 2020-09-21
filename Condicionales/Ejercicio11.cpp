//Simular un cajero con saldo inicial de 1000 dolares

#include<iostream>
using namespace std;

int main(){

    int saldoIni = 1000;
    int opcion;
    float extra, saldo=0, retirar;

    cout<<"Bienvenido al Cajero"<<endl;
    cout<<"1. Ingresar dinero: "<<endl;
    cout<<"2. Retirar dinero: "<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar";
            cin>> extra;
            saldo = saldoIni + extra;  
            cout<<"Dinero en la cuenta"<<saldo;
            break;

        case 2:
            cout<<"Digite la cantidad de dinero a retirar";
            cin>>retirar;
            if(retirar > saldoIni){
                cout<<"No tienes suficiente saldo";
            }else{
                saldo = saldoIni - retirar;
                cout<<"Dinero en la cuenta"<<saldo;
            }

        case 3: 
            break;
    }



    return 0;
}