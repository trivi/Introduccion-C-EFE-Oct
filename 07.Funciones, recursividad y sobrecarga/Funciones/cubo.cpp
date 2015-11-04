//Este programa pide el tamaño de la arista de un cubo y nos devuelve su volumen y su área

#include <iostream>

double VolumenCubo(double);
double AreaCubo(double);

using namespace std;

int main () {
	
	double arista;
	
	//Pedimos e introducimos el valor de la arista
	cout << "Escribe la longitud de la arista del cubo en metros" << "\n";
	cin >> arista;
	
	
	//Sacamos los datos por pantalla
	cout << "El volumen del cubo es " << VolumenCubo(arista) << "m\u00b3 " << "y su área " << AreaCubo(arista) << "m\u00b2" <<"." << "\n";
	
	
	return 0;
		
}


double VolumenCubo(double a) {

	return a*a*a;

}

double AreaCubo(double a) {

	return 6.0*a*a;

}
