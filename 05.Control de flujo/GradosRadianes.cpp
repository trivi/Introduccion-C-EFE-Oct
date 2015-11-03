//El programa transforma un ángulo de grados a radianes y viceversa

#include <iostream>
#include <cmath>


using namespace std;

int main () {
	
	double pi=4.0*atan(1.0);
	double AnguloRadianes;
	double AnguloGrados;
	int elec;		//variable para elegir la opción
	
	
	//Sacamos un menú para elegir por pantalla
	cout << "Elige una opción de las siguientes:" << endl;
	cout << "1.Convertir de radianes a grados" << endl;
	cout << "2.Convertir de grados a radianes" << endl;
	cin >> elec;
	
	
	//Si la elección es incorrecta
	while(elec!=1 && elec!=2) {
		cout << "Elección incorrecta, introduce 1 o 2:" << endl;
		cout << "1.Convertir de radianes a grados" << endl;
		cout << "2.Convertir de grados a radianes" << endl;
		cin >> elec;
	}
	
	
	//Si la elección es correcta ejecutamos el código correspondiente
	if (elec==1) {
		//Pedimos el valor del ángulo
		cout << "Introduce el valor del ángulo en radianes: ";
		cin >> AnguloRadianes;
		
		//Pasamos de radianes a grados
		AnguloGrados=AnguloRadianes*180.0/pi;
		
		//Sacamos el resultado por pantalla
		cout << "El ángulo en grados es " << AnguloGrados << endl;
	}
	else if (elec==2) {
		//Pedimos el valor del ángulo
		cout << "Introduce el valor del ángulo en grados: ";
		cin >> AnguloGrados;
		
		//Pasamos de grados a radianes
		AnguloRadianes=AnguloGrados/180.0*pi;
		
		//Sacamos el resultado por pantalla
		cout << "El ángulo en radianes es " << AnguloRadianes << endl;
	}
	
	
	return 0;
	
}
