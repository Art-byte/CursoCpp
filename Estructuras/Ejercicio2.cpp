/**
 * Estructuras anidadas
*/
#include<iostream>
#include<string.h>
using namespace std;

struct info_dir{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_dir dir_empleado;
    double salario;
} empleado[2];

int main(){

    for(int i=0; i<2; i++){
        //Cuando el buffer se llena hacemos lo siguiente
        fflush(stdin);

        cout<<"Ingresa tu nombre: ";
        cin.getline(empleado[i].nombre, 20, '\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleado[i].dir_empleado.ciudad, 30, '\n');
        cout<<"Digite su cuidad: ";
        cin.getline(empleado[i].dir_empleado.ciudad, 20, '\n');
        cout<<"Digite su provincia: ";
        cin.getline(empleado[i].dir_empleado.provincia, 20, '\n');
        cout<<"Ingrese su salario: ";
        cin>>empleado[i].salario;

        cout<<"\n";
    }

    for(int i=0; i<2; i++){
        cout<<"Nombre: "<<empleado[i].nombre<<endl;
        cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleado[i].salario<<endl;
        cout<<"\n";
    }

    return 0;
}
