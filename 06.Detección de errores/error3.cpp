//Este programa toma nuestro nombre por teclado y nos saluda por pantalla

#include <iostream>

using namespace std;

int main() {
	
	char nombre[3];		//declaramos la variable

//Pedimo el nombre por pantalla	
	cout << "Introduzca su nombre" << endl;
	cin >> nombre;
	
//Escribimos el nombre por pantalla
	cout << "Hola " << nombre << "." << endl;


	return 0;
}

