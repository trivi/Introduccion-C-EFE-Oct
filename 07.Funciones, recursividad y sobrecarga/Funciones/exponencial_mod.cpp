//Este programa nos devuelve la exponencial de x mediante un desarrollo de Taylor sin usar la librería cmath

#include <iostream>


double exponencial(double,double=0.001);	//Primer argumento: Exponente. Segundo argumento: error (por defecto 0.001)
double factorial(int);						//Declaramos la función factorial
//Declaramos la función potencia de exponente un número entero
double potencia(double, int=2);	//Argumentos: Base y exponente. Asumimos que el exponente será 2 si no decimos lo contrario

using namespace std;

int main () {
	
	double x;					//exponente en e^x
	
	
	//Pedimos el número por pantalla
	cout << "Introduce el exponente de la exponencial que quieras calcular" << endl;
	cin >> x;
	

	//Escribimos el resultado por pantalla
	cout << "La exponencial de " << x << " es " << exponencial(x,0.0001) << endl;
	
	
	return 0;
	
}


/*********************************Definimos la función "exponencial de"********************************/
double exponencial(double x,double eps) {

//	double x se refiere al exponente en e^x
//	double eps se refiere al epsilon (estimación del error) para parar la serie. Por defecto es 0.001

	double exponencial;		//Variable donde iremos almacenando la solución de la sumatoria
	double termino;				//Almacenamos el siguiente termino de la serie de Taylor
	int i=0;	//Será el índice para referirnos al término correspondiente
	
	
	//Calculamos el primer término de la serie (término 0)
	termino=potencia(x,i)/factorial(i);
	exponencial=termino;
	
	//Mientras el última término sumado sea mayor que el "error" máximo establecido continuarán calculandose términos
	while (termino>eps) {
		
		i++;
		
		//Calculamos es siguiente término
		termino=potencia(x,i)/factorial(i);
		
		//Calculamos la siguiente solución parcial
		exponencial=exponencial+termino;
		
	}
	
	
	return exponencial;
}

/***************************************Definimos la función recursiva factorial************************/
double factorial(int n) {

	if(n==0) return 1.0;
	
	return n*factorial(n-1);
}

/******************************************Definimos la función potencia*********************************/
double potencia(double x, int y) {
	
	double resultado=1;
	
	//Para los demás casos planteamos el siguiente algoritmo
	for(int i=0; i<y; i++) {
		
		resultado=resultado*x;
		
	}
	
	return resultado;
}
