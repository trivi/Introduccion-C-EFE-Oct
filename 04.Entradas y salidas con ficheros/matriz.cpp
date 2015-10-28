//El programa lee una matriz 4x4 de un fichero y la muestra por pantalla (como entrada y salida utiliza archivos)

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	int matriz[4][4]; //matriz[fila][columna]
	
	
	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("matriz_input.dat");
	

	//Leemos los valores de los elementos de la matriz
	leer >> matriz[0][0] >> matriz[0][1] >> matriz[0][2] >> matriz[0][3];
	leer >> matriz[1][0] >> matriz[1][1] >> matriz[1][2] >> matriz[1][3];
	leer >> matriz[2][0] >> matriz[2][1] >> matriz[2][2] >> matriz[2][3];
	leer >> matriz[3][0] >> matriz[3][1] >> matriz[3][2] >> matriz[3][3];
	
	
	//Escribe la matriz por pantalla
	cout << matriz[0][0] << "\t" << matriz[0][1] << "\t" << matriz[0][2] << "\t" << matriz[0][3] << endl;
	cout << matriz[1][0] << "\t" << matriz[1][1] << "\t" << matriz[1][2] << "\t" << matriz[1][3] << endl;
	cout << matriz[2][0] << "\t" << matriz[2][1] << "\t" << matriz[2][2] << "\t" << matriz[2][3] << endl;
	cout << matriz[3][0] << "\t" << matriz[3][1] << "\t" << matriz[3][2] << "\t" << matriz[3][3] << endl;
	
	//Cerramos los archivos usados
	leer.close();
	
	
	return 0;
	
}
