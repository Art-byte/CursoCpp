/*Escribir un programa que convierta 
segundos a horas, minutos y segundo
*/

#include<iostream>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){

    int totalSeg, h, m, s;
    
    cout<<"Digite el numero total de segundos: ";
    cin>>totalSeg;

    tiempo(totalSeg, h, m, s);

    cout<<"Tiempo equivalente: "<<endl;
    cout<<"Horas: "<<h<<endl;
    cout<<"Minutos: "<<m<<endl;
    cout<<"Segundos: "<<s<<endl;


    return 0;
}


void tiempo(int tiempo, int& Th, int& Tm, int& Ts){

    Th = tiempo/3600;
    tiempo %= 3600;

    Tm = tiempo/60;
    Ts = tiempo%60;

}
