//Este programa te pregunta tus apellidos y tu nombre y luego los devuelve en el orden inverso (como entrada y salida utiliza archivos)

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main () {
	
	string nombre,apellidos;		//Declaramos los string para almacenar nuestro nombre


	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("InvertirNombreApellidos_input.dat");
	
	ofstream escribir;
	escribir.open("InvertirNombreApellidos_output.dat");
	
	
//	cout << "Escribe tus apellidos" << "\n";
	getline(leer,apellidos);

//	cout << "Escribe tu nombre" << "\n";
	leer >> nombre;
	
	escribir << "Hola " << nombre << " " << apellidos << "." << "\n";

	//Cerramos los archivos usados
	leer.close();
	escribir.close();
	
	
	return 0;
	
}
