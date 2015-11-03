//Este programa es un ejemplo que compila pero tiene un fallo de desbordamiento de búfer

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

