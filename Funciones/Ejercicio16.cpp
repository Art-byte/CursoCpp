//Realizar la suma de numeros complejos 


#include<iostream>
using namespace std;

struct Complejos
{
    float real, imaginaria;
}z1, z2;


void pedirDatos();
Complejos suma(Complejos, Complejos);
void mostrarDatos(Complejos);




int main(){

    pedirDatos();
    Complejos x = suma(z1, z2);
    mostrarDatos(x);


    return 0;
}


void pedirDatos(){
    cout<<"Ingresando el primer numero complejo: "<<endl;
    cout<<"Inserta la parte real: ";
    cin>>z1.real;
    cout<<"Ingresnado la parte imaginaria: ";
    cin>>z1.imaginaria;
    cout<<"\n";
    cout<<"Ingresando el segundo numero complejo: "<<endl;
    cout<<"Inserta la parte real: ";
    cin>>z2.real;
    cout<<"Ingresnado la parte imaginaria: ";
    cin>>z2.imaginaria;
}


Complejos suma(Complejos z1, Complejos z2){
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}



void mostrarDatos(Complejos x){
    cout<<"Resultado de la suma: "<<x.real<<" , "<<x.imaginaria<<endl; 
}
