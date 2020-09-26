/**
 * Definir una estructura que indique el tiempo que tarda un ciclista en una etapa
 * Esta tiene tres campos: horas, minutos, y segundo
 * Al dar N etapas, calcular el tiempo total empleado en correr todas las etapas
 * 
*/
#include<iostream>
using namespace std;

struct Tiempos{
    int horas;
    int minutos;
    int segundos;
}etapas[50];


int main(){

    int numero_etapas;
    int h=0, m=0, s=0;

    cout<<"Digite el numero de etapas: ";
    cin>>numero_etapas;

    for(int i=0; i<numero_etapas; i++){
        cout<<"Ingrese las horas: ";
        cin>>etapas[i].horas;

        cout<<"Ingresa los minutos: ";
        cin>>etapas[i].minutos;

        cout<<"Ingresa el numero de segundos: ";
        cin>>etapas[i].segundos;

        h = h + etapas[i].horas;
        m = m + etapas[i].minutos;

        if(m >= 60){
            m -= 60;
            h++;
        }

        s = s + etapas[i].segundos;
        if(s >= 60){
            s -= 60;
            m++;
        }
        cout<<"\n";
    }

    cout<<"Tiempo total empleado";
    cout<<"Horas: "<<h<<endl;
    cout<<"Minutos: "<<m<<endl;
    cout<<"Segundos: "<<s<<endl;

    return 0;
}