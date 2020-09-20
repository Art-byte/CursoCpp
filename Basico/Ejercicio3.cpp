/*realice un programa que lea una entrada de
edad int, sexo char, altura float

tras leerlos debe mostrarlos el programa;
*/

#include<iostream>

using namespace std; 

int main(){

    int edad;
    char sexo;
    float altura;

    cout<<"Ingresa la edad: ";
    cin>>edad;

    cout<<"Ingresa el sexo M/F: ";
    cin>>sexo;

    cout<<"Ingresa la altura: ";
    cin>>altura;

    cout<<"Los datos son: "<<endl;
    cout<<edad<<endl;
    cout<<sexo<<endl;
    cout<<altura<<endl;

    return 0;
}