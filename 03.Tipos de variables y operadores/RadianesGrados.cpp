//El programa transforma un ángulo de radianes a grados

#include <iostream>
#include <cmath>


using namespace std;

int main () {
	
	double pi=4.0*atan(1.0);
	double AnguloRadianes;
	double AnguloGrados;
	
	//Pedimos el valor del ángulo
	cout << "Introduce el valor del ángulo en radianes: ";
	cin >> AnguloRadianes;
	
	
	//Pasamos de radianes a grados
	AnguloGrados=AnguloRadianes*180.0/pi;
	
	
	//Sacamos el resultado por pantalla
	cout << "El ángulo en grados es " << AnguloGrados << "\n";

	
	return 0;
	
}
