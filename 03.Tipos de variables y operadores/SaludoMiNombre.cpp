//Este programa te pregunta tu nombre y luego te saluda.

#include <iostream>
#include <string>


using namespace std;

int main () {
	
	string nombre;		//Declaramos un string para almacenar nuestro nombre
	
	cout << "Escribe tu nombre" << "\n";
	
	cin >> nombre;
	
	cout << "Hola " << nombre << "." << "\n";
	
	
	return 0;
		
	
}
