//Este programa nos devuelve el factorial de un número

#include <iostream>
#include <cmath>

//Declaramos la función factorial
double factorial(int);
const double pi=3.141592653589793;


using namespace std;

int main () {
	
	int numero;

	
	//Pedimos el número por pantalla
	cout << "Introduce el número del que quieras obtener el factorial" << endl;
	cin >> numero;
	

	//Escribimos el resultado por pantalla
	cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
	
	
	return 0;
}


/**********Definimos la función factorial***********/
double factorial(int n) {

	double resultado=1.0;
	
	if(n<20){
	
		for(int i=1; i<=n; i++) {
			resultado=resultado*(double)i;
		}
	}
	//Podemos incluir la aproximación de Stirling para factoriales "grandes"
	else {
		resultado=sqrt(2*pi*n)*pow((double)n/exp(1.0),n);
	}


	return resultado;
}
