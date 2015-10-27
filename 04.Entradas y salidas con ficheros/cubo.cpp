//Este programa pide el tamaño de la arista de un cubo y nos devuelve su volumen y su área (como entrada y salida utiliza archivos)

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	double arista;
	double volumen;
	double area;
	
	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("cubo_input.dat");
	
	ofstream escribir;
	escribir.open("cubo_output.dat");
	
	
	//Pedimos e introducimos el valor de la arista
	//cout << "Escribe la longitud de la arista del cubo en metros" << "\n";
	leer >> arista;
	
	//Calculamos las dos magnitudes que queremos
	volumen=arista*arista*arista;
	area=6.0*arista*arista;
	
	//Escribimos los datos en el archivo
	escribir << "El volumen del cubo es " << volumen << "m\u00b3 " << "y su área " << area << "m\u00b2" <<"." << "\n";
	

	//Cerramos los archivos usados
	leer.close();
	escribir.close();
	
	
	return 0;
		
	
}
