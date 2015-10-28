//El programa calcula el área y el perímetro de un círculo a partir de su radio

#include <iostream>
#include <cmath>


using namespace std;

int main () {
	
	double pi=4.0*atan(1.0);
	double radio;
	double area;
	double perimetro;
	
	//Pedimos el valor del radio
	cout << "Introduce el valor del radio de la circunferencia en metros: ";
	cin >> radio;
	
	
	//Calculamos el área y el perímetro
	area=pi*radio*radio;
	perimetro=2.0*pi*radio;
	
	
	//Sacamos los resultados por pantalla
	cout << "El área del circulo es " << area << "m\u00b2 " << "y su perímetro mide " << perimetro << "m." << "\n";
	
	
	return 0;
	
}
