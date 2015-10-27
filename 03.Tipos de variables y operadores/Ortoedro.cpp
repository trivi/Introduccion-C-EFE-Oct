//Este programa pide el tamaño de la arista de un cubo y nos devuelve su volumen y su área

#include <iostream>


using namespace std;

int main () {
	
	//Declaramos las variables necesarias
	double arista[3];
	double volumen;
	double area_cara[3];
	double area_total;
	
	
/***********Pedimos e introducimos el valor de las aristas****************************/
	cout << "Escribe el largo del ortoedro en metros" << "\n";
	cin >> arista[0];

	cout << "Escribe la anchura del ortoedro en metros" << "\n";
	cin >> arista[1];

	cout << "Escribe la altura del ortoedro en metros" << "\n";
	cin >> arista[2];
/*************************************************************************************/	
	
	//Calculamos las magnitudes que queremos
	volumen=arista[0]*arista[1]*arista[2];
	area_cara[0]=arista[0]*arista[1];
	area_cara[1]=arista[0]*arista[2];
	area_cara[2]=arista[1]*arista[2];
	area_total=2.0*area_cara[0]+2.0*area_cara[1]+2.0*area_cara[2];
	
	
	//Sacamos los datos por pantalla
	cout << "El volumen del ortoedro es " << volumen << "m\u00b3." << "\n";
	cout << "El área de su base es " << area_cara[0] << "m\u00b2." << "\n";
	cout << "El área de una de sus caras laterales es " << area_cara[1] << "m\u00b2." << "\n";
	cout << "El área de la otra cara diferente es " << area_cara[2] << "m\u00b2." << "\n";
	cout << "El área total del ortoedro es " << area_total << "m\u00b2." << "\n";
	
	
	return 0;
		
	
}
