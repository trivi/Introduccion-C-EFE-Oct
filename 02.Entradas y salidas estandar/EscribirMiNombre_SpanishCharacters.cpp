/*Versión de EscribirMiNombre.cpp en el caso de que no funcionen los caractéres españoles*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	/*Habilito el Español para escribir*/
	locale mylocale("");
	cout.imbue(mylocale);
	
	/*Escribo mi nombre completo*/
	cout << "Mi nombre completo es: ";
	cout << "Álvaro Berdonces Triviño\n";
	
	
	return 0;
}
