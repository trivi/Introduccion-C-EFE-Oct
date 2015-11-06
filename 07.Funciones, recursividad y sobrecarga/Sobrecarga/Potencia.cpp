//Este programa incluye una función que nos devuelve la potencia entera

#include <iostream>
#include <cmath>


//Declaramos la función potencia
double potencia(double, int=2);	//Argumentos: Base y exponente. Asumimos que el exponente será 2 si no decimos lo contrario
double potencia(double,double);


using namespace std;

int main () {
	
	double base=2.5;		//Base
	double exponente=4;		//Exponente
	
	
/********Algunas pruebas de lo que devuelve nuestra función potencia***********/
	cout << "Algunos ejemplos usando nuestra función potencia:" << endl;
	
	cout << base << '^' << exponente << '=' << potencia(base,exponente) << endl;
	cout << "4^2" << '=' << potencia(4) << endl;
	cout << base << '^' << "3" << '=' << potencia(base,3) << endl;
	cout << "5^0" << '=' << potencia(5,0) << endl;
	cout << "2.5^2.5" << '=' << potencia(base,2.5) << endl;
	cout << "9^1.5" << '=' << potencia(9,1.5) << endl;
	
	
	return 0;
	
}



/******************************************Definimos la función potencia*********************************/
double potencia(double x, double y) {
	
	return exp(y*log(x));
}

double potencia(double x, int y) {
	
	double resultado=1;
	
	//Para los demás casos planteamos el siguiente algoritmo
	for(int i=0; i<y; i++) {
		
		resultado=resultado*x;
		
	}
	
	return resultado;
}
