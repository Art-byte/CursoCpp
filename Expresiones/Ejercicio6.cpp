/*La calificacion final de un alumno es la media ponderada de tres notas
practicas es 30%
teorica 60%
participacion 10%

calcular la nota final de una alumno con estos tres conceptos*/

#include<iostream>

using namespace std;

int main(){
    double practica, teoria, participacion;
    double notaFinal = 0;

    cout<<"Total de practicas: ";
    cin>>practica;
    cout<<"Total de teoria: ";
    cin>>teoria;
    cout<<"Total de participacion: ";
    cin>>participacion;

    practica = practica * 0.30;
    teoria = teoria * 0.60;
    participacion = participacion * 0.10;

    notaFinal = practica + teoria + participacion;

    cout<<"La nota final es de: "<<notaFinal<<endl;

    return 0;
}