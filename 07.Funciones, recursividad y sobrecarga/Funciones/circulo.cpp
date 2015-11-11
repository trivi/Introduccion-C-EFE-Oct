//El programa calcula el área y el perímetro de un círculo a partir de su radio

#include <iostream>

double AreaCirculo(double);
double PerimetroCirculo(double);

const double pi=3.141592653589793;

using namespace std;

int main () {
	
	double radio;
	
	//Pedimos el valor del radio
	cout << "Introduce el valor del radio de la circunferencia en metros: ";
	cin >> radio;
	
	
	//Sacamos los resultados por pantalla
	cout << "El área del circulo es " << AreaCirculo(radio) << "m\u00b2 " << "y su perímetro mide " << PerimetroCirculo(radio) << "m." << "\n";
	
	
	return 0;
	
}

/********************Funciones para calcular parámetros del círculo********************************/
double AreaCirculo(double radio) {

	return pi*radio*radio;

}

double PerimetroCirculo(double radio) {

	return 2*pi*radio;
	
}
