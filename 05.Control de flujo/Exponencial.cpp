//Este programa nos devuelve la exponencial de x mediante un desarrollo de Taylor

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	double x;					//exponente en e^x
	double exponencial=1.0;
	double factorial=1.0;		//Factoriales de la serie de Taylor
	double potencia=1.0;		//Potencias de x de la serie de Taylor
	double eps=0.001;			//El epsilon para parar la serie lo seleccionamos en 0.001
	double termino;				//Almacenamos el siguiente termino de la serie de Taylor
	
	
	//Pedimos el número por pantalla
	cout << "Introduce el exponente de la exponencial que quieras calcular" << endl;
	cin >> x;
	
	
	int i=1;
	termino=potencia/factorial;
	
	while (termino>eps) {
		potencia=potencia*x;
		
		factorial=factorial*i;
		i++;
		
		termino=potencia/factorial;
		exponencial=exponencial+termino;
	}
	

	//Escribimos el resultado por pantalla
	cout << "La exponencial de " << x << " es " << exponencial << endl;
	cout << "El error cometido es " << exp(x)-exponencial << endl;
	
	
	return 0;
	
}
