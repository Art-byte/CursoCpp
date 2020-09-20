/*Calcular un pla siguiente funcion de F(x,y) = raiz(x) / y2 -1
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    double x, y, resultado;

    cout<<"Ingresar valor de x: ";
    cin>>x;
    cout<<"Ingresar valor de y: ";
    cin>>y;

    resultado = (sqrt(x) )/ (pow(y,2) -1);

    cout<<"El valor de f es: "<<resultado<<endl;
    return 0;
}