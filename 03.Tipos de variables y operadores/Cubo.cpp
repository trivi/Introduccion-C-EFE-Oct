//Este programa pide el tamaño de la arista de un cubo y nos devuelve su volumen y su área

#include <iostream>


using namespace std;

int main () {
	
	double arista;
	double volumen;
	double area;
	
	//Pedimos e introducimos el valor de la arista
	cout << "Escribe la longitud de la arista del cubo en metros" << "\n";
	cin >> arista;
	
	//Calculamos las dos magnitudes que queremos
	volumen=arista*arista*arista;
	area=6.0*arista*arista;
	
	//Sacamos los datos por pantalla
	cout << "El volumen del cubo es " << volumen << "m\u00b3 " << "y su área " << area << "m\u00b2" <<"." << "\n";
	
	
	return 0;
	
	
}
