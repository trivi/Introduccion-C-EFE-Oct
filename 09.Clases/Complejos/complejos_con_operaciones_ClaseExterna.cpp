#include <iostream>
#include "complejos.hpp"

using std::cin;
using std::cout;
using std::endl;

int main() {
	complejo numero1, numero2;	//Dos números a leer por teclado	
	complejo suma, resta, producto, cociente;	//Para almacenar los resultados
	
	//Pedimos el primer número
	cout << "Introduce un número complejo (parte real y parte imaginaria separadas por un espacio): ";
	cin >> numero1;
	
	//Pedimos el segundo número
	cout << "Introduce otro número complejo (parte real y parte imaginaria separadas por un espacio): ";
	cin >> numero2;
	
	//Hacemos las operaciones y guardamos sus resultados
	suma=numero1+numero2;
	resta=numero1-numero2;
	producto=numero1*numero2;
	cociente=numero1/numero2;
	
	
	//Espaciamos los resultados
	cout << endl << endl;
	
/*********************************Escribimos los resultados por pantalla************************************/

	cout << "El primer número es " << numero1 << endl;
	
	cout << "El segundo número es " << numero2 << endl;
	
	cout << "El resultado de su suma es " << suma << endl;
	
	cout << "El resultado de su resta es " << resta << endl;
	
	cout << "El resultado de su producto es " << producto << endl;
	
	cout << "El resultado de su cociente es " << cociente << endl;
	
	
	return 0;
}
