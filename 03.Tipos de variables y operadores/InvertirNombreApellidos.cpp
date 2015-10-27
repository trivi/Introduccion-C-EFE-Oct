//Este programa te pregunta tus apellidos y tu nombre y luego los devuelve en el orden inverso

#include <iostream>
#include <string>


using namespace std;

int main () {
	
	string nombre,apellidos;		//Declaramos los string para almacenar nuestro nombre
//	string nombre,apellido1,apellido2;
	
	cout << "Escribe tus apellidos" << "\n";

	getline(cin,apellidos);
//	cin >> apellido1 >> apellido2;	

	cout << "Escribe tu nombre" << "\n";
	
	cin >> nombre;
	
	cout << "Hola " << nombre << " " << apellidos << "." << "\n";
//	cout << "Hola " << nombre << " " << apellido1 << " " << apellido2 << "." << "\n";
	
	
	return 0;
	
}
