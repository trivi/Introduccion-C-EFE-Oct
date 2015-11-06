//Este programa es un ejemplo que compila pero tiene un fallo al usar una variable sin valor asignado

#include <iostream>

int main() {
	
	int primero, intermedio, resultado; //declaramos los 3 enteros que vamos a usar

	intermedio=primero+4*5-2;
	resultado=intermedio*4;

	std::cout << resultado << std::endl;

	return 0;
}

