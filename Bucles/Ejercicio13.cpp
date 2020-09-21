/*
 * Realizar un programa que solicite a un usuario pensar en un numero entre 1 y 100
 * el programa debe generar estos numeros de manera aleatoria y preguntar al usuario si es mayor o menor
 * hasta encontrar el numero del usuario y mostrar los intentos que le llevo
 */

#include<iostream>
#include<math.h>
#include<time.h>

using namespace std;

int main(){

    int n, numAl, contador=0;

    srand(time(NULL));
    numAl = 1 + rand()% (100);

    do{
        cout<<"Insertar un numero: ";
        cin>>n;

        if(n > numAl){
            cout<<"menos"<<endl;
        }else if(n < numAl){
            cout<<"mas"<<endl;
        }

        contador++;

    }while(n != numAl);

    cout<<"Adivinaste el numero";
    cout<<"Numero de intentos: "<<contador<<endl;

    return 0;
}