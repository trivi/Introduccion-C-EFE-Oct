//Este programa pide la base y el exponente de una potencia y devuelve el resultado

#include <iostream>
#include <cmath>

//Declaramos la función potencia. Primer argumento: base. Segundo argumento: exponente.
double potencia(double,double);

using namespace std;

int main () {
	
	double base;
	double exponente;

	
	//Pedimos e introducimos el valor de la arista
	cout << "Introduce la base de la potencia: ";
	cin >> base;
	
	cout << "Introduce el exponente de la potencia: ";
	cin >> exponente;
	
	
	//Sacamos el resultado por pantalla
	cout << "\n"; 	//Introducimos un salto de línea para que queden separados los datos del resultado en la pantalla (no hace falta)
	cout << "El resultado es " << potencia(base,exponente) << "\n";
	
	
	return 0;
	
}

/******************************************Definimos la función potencia*********************************/
double potencia(double x, double y) {
	
	return exp(y*log(x));
}
