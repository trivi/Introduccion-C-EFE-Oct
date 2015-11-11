//Este programa incluye una función que nos devuelve la potencia entera

#include <iostream>


//Declaramos la función de la sucesión de Fibonacci
double fib(int);


using namespace std;

int main () {
	
	double n;		//Termino de la sucesión
	
	
/********Preguntamos qué término de sucesión nos interesa**********/
	cout << "Introduce el término de la sucesión de Fibonacci a calcular: ";
	cin >> n;

/***********Escribimos por pantalla el resultado*************/
	cout << "El término número " << n << " de la serie de Fibonacci es " << fib(n) << endl;
	
	
	return 0;
}



/************************Definimos la función que nos devuelve el valor de la sucesión de Fibonacci*********************************/
double fib(int n) {
	
	if(n==1||n==2) return 1;
	
	return fib(n-1)+fib(n-2);
}
