
#include <iostream>
using namespace std;

void valor(int, int &, int &, int &, int &, int &, int &);

int main()
{

    int num, cien=10,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

    cout<< "Digite un valor: ";
    cin>> num;

    tipoCambio(num, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "Cantidad de billetes a entregar como cambio:" << endl;
    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cincuenta << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Uno: " << uno << endl;

    return 0;
}

void tipoCambio(int num, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = num / 100;
    num %= 100;

    cincuenta = num / 50;
    num %= 50;

    veinte = num / 20;
    num %= 20;

    diez = num / 10;
    num %= 10;

    cinco = num / 5;
    uno = num % 5;
}