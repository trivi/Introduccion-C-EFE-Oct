//El programa transforma un ángulo de grados a radianes

#include <iostream>
#include <cmath>


using namespace std;

int main () {
	
	double pi=4.0*atan(1.0);
	double AnguloRadianes;
	double AnguloGrados;
	
	//Pedimos el valor del ángulo
	cout << "Introduce el valor del ángulo en grados: ";
	cin >> AnguloGrados;
	
	
	//Pasamos de grados a radianes
	AnguloRadianes=AnguloGrados/180.0*pi;
	
	
	//Sacamos el resultado por pantalla
	cout << "El ángulo en radianes es " << AnguloRadianes << "\n";

	
	return 0;
	
}
