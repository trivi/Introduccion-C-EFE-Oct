//Este programa pide la base y el exponente de una potencia y devuelve el resultado

#include <iostream>


//Declaramos la función factorial
double factorial(int);

using namespace std;

int main () {
	
	int n;

	
	//Pedimos e introducimos el valor de la arista
	cout << "Introduce el número del que hacer el factorial: ";
	cin >> n;

	//Sacamos el resultado por pantalla
	cout << "El factorial de " << n << " es " << factorial(n) << endl;
	
	
	return 0;
	
}

/*********************************Definimos la función recursiva para el factorial*********************************/
double factorial(int n) {

	if(n==0) return 1.0;
	
	return n*factorial(n-1);
}
