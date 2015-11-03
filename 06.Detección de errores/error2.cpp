//Este programa divide un número entre otro y nos devuelve el resultado

#include <iostream>

using namespace std;

int main() {
	
	int num1, num2; //declaramos los 3 enteros que vamos a usar
	int resultado;
	
	cout << "Introduzca el numerador" << endl;
	cin >> num1;
	
	cout << "Introduzca el denominador (0)" << endl;
	cin >> num2;
	
	resultado=num1/num2;

	cout << "El resultado es " << resultado << endl;

	return 0;
}

