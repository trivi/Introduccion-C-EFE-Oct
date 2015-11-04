//Este programa calcula el número PI a partir pares de números aleatorios

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main () {
	
	const double pi=3.141592653589793;	//tomamos pi de otra fuente para poder compararlo
	double pi_aleatorios;				//donde guardaremos el valor calculado de pi
	double x,y;							//variables para almacenar las coordenadas aleatoriamente generadas
	int n;								//número de pares de aleatorios que usaremos usar
	int numerador=0;					//número de puntos que pertenecen al cuarto de circulo tenido en cuenta (inicialmente 0)

	
	//Inicializamos el generador de aleatorios usando el reloj del ordenador
	srand(time(NULL));
	
	
	//Pedimos el número de pares de aleatorios para realizar el cálculo
	cout << "Introduzca el número de parejas de aleatorios con que quiere realizar el cálculo" << endl;
	cin >> n;
	
	
	for(int i=0; i<n; i++) {
		
		//calculamos las coordenadas en el cuadrante
		x=(double)rand()/(double)RAND_MAX;
		y=(double)rand()/(double)RAND_MAX;
		
		//calculamos su cuadrado (lo almacenamos en la misma variable porque no nos hace falta retener la información
		x=x*x;
		y=y*y;
		
		//comprobamos si el punto generado está dentro del círculo o no (si lo está lo recordamos)
		if (x+y<1) numerador++;
		
	}
	
	//calculamos pi con una simple división y multiplicamos por 4 el resultado (porque solo hemos considerado un cuadrante)
	pi_aleatorios=4.0*(double)numerador/(double)n;
	
	
	
	//Escribimos el resultado por pantalla y la diferencia con pi obtenido desde otra fuente
	cout << "El valor de pi calculado es " << pi_aleatorios << endl;
	cout << "La diferencia con el valor de bibliografía es " << abs(pi_aleatorios-pi) << endl;
	
	
	return 0;
	
}
