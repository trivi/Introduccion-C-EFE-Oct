//Nos dice si un número es par o impar

#include <iostream>


using namespace std;

int main () {
	
	int numero;
	

	//Pedimos el número por pantalla
	cout << "Introduce el número que quieras saber si es par o impar" << endl;
	cin >> numero;
	
	
	//Si el número es impar su modulo(2) debe ser 1 o -1
	if (numero%2==1||numero%2==-1) {
		cout << "El número es impar" << endl;
	}
	//La otra opción es que sea par
	else if (numero%2==0) {
		cout << "El número es par" << endl;
	}
	
	
	return 0;
	
}
