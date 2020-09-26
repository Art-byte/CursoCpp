/**
 * Crear un arreglo de estructura  llamado atleta para n atletas
 * que contengan nombre, pais y numero de medalla, y que devuelvalos datos del
 * atleta que mas medallas ha ganado
*/
#include<iostream>
using namespace std;

struct atleta
{
    char nombre[50];
    char pais[50];
    int medallas;
}atletas[50];


int main(){

    int numAtletas;
    int mayor=0, menor= 100, masMeda=0; 

    cout<<"Ingresa el numero de atletas que participan: ";
    cin>>numAtletas;
    cout<<"\n"

    for(int i=0; i<numAtletas; i++){
        cin.ignore();
        cout<<"Ingresa el nombre del atleta: ";
        cin.getline(atletas[i].nombre, 50, '\n');
        cout<<"Ingresa el pais de procedencia: ";
        cin.getline(atletas[i].pais, 50, '\n');
        cout<<"Ingresa el numero de medallas: ";
        cin>>atletas[i].medallas; 

        if(atletas[i].medallas > mayor){
            mayor = atletas[i].medallas;
            masMeda = i;
        }
        cout<<"\n";
    }

    cout<<"Atleta con mayor numero de medallas"<<endl;
    cout<<"Nombre: "<<atletas[masMeda].nombre<<endl;
    cout<<"Pais: "<<atletas[masMeda].pais<<endl;
    cout<<"Numero de medallas: "<<atletas[masMeda].medallas<<endl;

    return 0;
}