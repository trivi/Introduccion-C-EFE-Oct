//Este programa nos devuelve el factorial de un número

#include <iostream>


using namespace std;

int main () {
	
	int numero;
	int factorial=1;
	
	
	//Pedimos el número por pantalla
	cout << "Introduce el número del que quieras obtener el factorial" << endl;
	cin >> numero;
	
	
	for(int i=1; i<=numero; i++) {
		factorial=factorial*i;
	}
	

	//Escribimos el resultado por pantalla
	cout << "El factorial de " << numero << " es " << factorial << endl;
	
	
	return 0;
	
}
