//Este programa nos devuelve la exponencial de x mediante un desarrollo de Taylor

#include <iostream>
#include <cmath>	//incluida solo para comparar el resultado de nuestra función con la que contiene esta librería

double exponencial(double,double=0.001);	//Primer argumento: Exponente. Segundo argumento: error (por defecto 0.001)

using namespace std;

int main () {
	
	double x;					//exponente en e^x
	
	
	//Pedimos el número por pantalla
	cout << "Introduce el exponente de la exponencial que quieras calcular" << endl;
	cin >> x;
	

	//Escribimos el resultado por pantalla
	cout << "La exponencial de " << x << " es " << exponencial(x) << endl;
	cout << "El error cometido es " << exp(x)-exponencial(x) << endl;
	cout << "Y el error cometido si exigimos más precisión " << exp(x)-exponencial(x,0.0001) << endl;
	
	
	return 0;
	
}


/************Definimos la función "exponencial de"***********/
double exponencial(double x,double eps) {

//	double x;					//exponente en e^x
	double exponencial=1.0;
	double factorial=1.0;		//Factoriales de la serie de Taylor
	double potencia=1.0;		//Potencias de x de la serie de Taylor
//	double eps=0.001;			//El epsilon para parar la serie lo seleccionamos en 0.001
	double termino;				//Almacenamos el siguiente termino de la serie de Taylor


	int i=1;
	termino=potencia/factorial;
	
	while (termino>eps) {
		potencia=potencia*x;
		
		factorial=factorial*i;
		i++;
		
		termino=potencia/factorial;
		exponencial=exponencial+termino;
	}
	
	return exponencial;
}
