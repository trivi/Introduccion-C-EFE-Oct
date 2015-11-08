//Nos dice si un número es par o impar

#include <iostream>

//Declaramos una función que nos diga si un número es par o impar
void ParImpar(int);

using namespace std;

int main () {
	
	int numero;
	
	//Pedimos el número por pantalla
	cout << "Introduce el número que quieras saber si es par o impar" << endl;
	cin >> numero;

	ParImpar(numero);

	return 0;
}


//Definimos la función que nos dice si un número es par o impar, como no devuelve salidas al programa principal su tipo es "void"
void ParImpar(int numero) {
	
	//Si el número es impar su modulo(2) debe ser 1 o -1
	if (numero%2==1||numero%2==-1) {
		cout << "El número es impar" << endl;
	}
	//La otra opción es que sea par
	else if (numero%2==0) {
		cout << "El número es par" << endl;
	}

}
