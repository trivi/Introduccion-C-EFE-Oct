//Este programa pide la base y el exponente de una potencia y devuelve el resultado

#include <iostream>
#include <cmath>


using namespace std;

int main () {
	
	double base;
	double exponente;
	double resultado;
	
	//Pedimos e introducimos el valor de la arista
	cout << "Introduce la base de la potencia: ";
	cin >> base;
	
	cout << "Introduce el exponente de la potencia: ";
	cin >> exponente;
	
	
	//Calculamos el resultado haciendo uso de la definición de las potencias de exponente real
	resultado=exp(exponente*log(base));
	
	
	//Sacamos el resultado por pantalla
	cout << "\n"; 	//Introducimos un salto de línea para que queden separados los datos del resultado en la pantalla (no hace falta)
	cout << "El resultado es " << resultado << "\n";
	
	
	return 0;
	
}
