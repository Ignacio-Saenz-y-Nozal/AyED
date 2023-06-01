#include <iostream>
using namespace std;

double IterarPi(){

    double pi = 0.0;
    int denominador = 1; // variable impar auxiliar
    int signo = 1; // variable para alternar signo sin calcular potencia
    int iteraciones = 0;

    do
    {
        pi +=  signo * (1.0 / denominador); // Serie de Leibniz
        denominador += 2; // denominador suma + 2 para aumentar usando solo impares
        signo *= -1; // invierte signo
        iteraciones++;
    } while (static_cast<int>(pi*1e6*4)!=3141592); // convierto pi a int para el redondeo a 6 decimales

    cout << "El programa realizo " << iteraciones << " iteraciones." << endl;

    return pi * 4; // multiplicar por 4 ya que Serie de Leibniz devuelve pi/4
}

int main(){

    double pi = IterarPi();
    cout.precision(7); // Precision de 6 valores despues de la coma
    cout << "El valor aproximado de pi es: " << pi << endl;

    return 0;
}
