//El programa lee una matriz 4x4 de un fichero y muestra por pantalla la matriz y su transpuesta

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	int matriz[4][4]; //matriz[fila][columna]
	
	
	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("MatrizTranspuesta_input.dat");
	

	//Leemos los valores de los elementos de la matriz
	for (int i=0; i<4; i++) {
	
		for (int j=0; j<4; j++) {
			
			leer >> matriz[i][j];			
		}
	}
	
	//Escribimos la matriz por pantalla
	cout << "La matriz es:" << endl;
	
	for (int i=0; i<4; i++) {
	
		for (int j=0; j<4; j++) {
			
			cout << matriz[i][j];
			if (j!=3) cout << "\t";
		}
		
		cout << endl;
	}
	
	//Escribimos la matriz transpuesta por pantalla
	cout << "Y su transpuesta:" << endl;
	
	for (int i=0; i<4; i++) {
	
		for (int j=0; j<4; j++) {
			
			cout << matriz[j][i];
			if (j!=3) cout << "\t";
		}
		
		cout << endl;
	}
	
	
	//Cerramos los archivos usados
	leer.close();
	
	
	return 0;
	
}
