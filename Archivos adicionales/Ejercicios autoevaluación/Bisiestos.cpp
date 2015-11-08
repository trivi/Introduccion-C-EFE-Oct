//Este programa calcula los años bisiestos entre el año 1 y el 4000 y los escribe en un fichero
//
//Dato: Un año es bisiesto si es divisible entre 4, a menos que sea divisible entre 100.
//Sin embargo, si un año es divisible entre 100 y además es divisible entre 400, también resulta bisiesto.

#include <iostream>
#include <fstream>


using namespace std;

int main () {
	
	//Declaración de variables
	int n_bisiestos=4000; //número de bisiestos a calcular

	
	//Abrimos el archivo para escribir la salida
	ofstream escribir;
	escribir.open("bisiestos_output.dat");
	
	
	//Creamos un bucle para recorrer todo el conjunto de años
	for(int i=1; i<=4000; i++) {
		
		//Todos los multiplos de 400 serán bisiestos
		if(i%400==0) {
			escribir << i << endl;
		}
		else if(i%4==0 && i%100!=0) {	//De los demás, los multiplos de 4 y no multiplos de 100 son bisiestos
			escribir << i << endl;
		}
		
		
	}
	

	//Cerramos el archivo que creamos para escribir
	escribir.close();
	
	return 0;
	
}
