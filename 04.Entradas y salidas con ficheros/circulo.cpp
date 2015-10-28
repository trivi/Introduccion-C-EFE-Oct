//El programa calcula el área y el perímetro de un círculo a partir de su radio (como entrada y salida utiliza archivos)

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main () {
	
	double pi=4.0*atan(1.0);
	double radio;
	double area;
	double perimetro;
	
	
	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("circulo_input.dat");
	
	ofstream escribir;
	escribir.open("circulo_output.dat");
	
	
	//Pedimos el valor del radio
	//cout << "Introduce el valor del radio de la circunferencia en metros: ";
	leer >> radio;
	
	
	//Calculamos el área y el perímetro
	area=pi*radio*radio;
	perimetro=2.0*pi*radio;
	
	
	//Escribimos los resultados en el archivo
	escribir << "El área del circulo es " << area << "m\u00b2 " << "y su perímetro mide " << perimetro << "m." << "\n";
	
	//Cerramos los archivos usados
	leer.close();
	escribir.close();
	
	
	return 0;
	
}
