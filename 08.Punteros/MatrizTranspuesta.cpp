//El programa lee una matriz 4x4 de un fichero y muestra por pantalla la matriz y su transpuesta

#include <iostream>
#include <fstream>
#include <new>

void Leer(double matriz[], int m, int n);
void MatNormal(double matriz[], int m, int n);
void MatTraspuesta(double matriz[], int m, int n);

using namespace std;

int main () {
	
	int m=4,n=4;				//Orden de la matríz. m->nº de filas. n->nº de columnas.
	double * matriz;			//puntero donde se almacena la matriz
	matriz=new double[m*n];		//Dimensionamos la matriz del tamaño deseado
	
	
	//Leemos la matriz de un archivos
	Leer(matriz,m,n);
	
	//Escribimos la matriz por pantalla
	MatNormal(matriz,m,n);
	
	//Escribimos la matriz transpuesta por pantalla
	MatTraspuesta(matriz,m,n);
	
	return 0;
}


void Leer(double matriz[], int m, int n) {

	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("MatrizTranspuesta_input.dat");
	
	//Leemos los valores de los elementos de la matriz
	for (int i=0; i<m; i++) {
	
		for (int j=0; j<n; j++) {
			
			leer >> matriz[i*n+j];
		}
	}

	//Cerramos los archivos usados
	leer.close();
}

void MatNormal(double matriz[], int m, int n) {
	
	//Escribimos la matriz por pantalla
	cout << "La matriz es:" << endl;
	
	for (int i=0; i<m; i++) {
	
		for (int j=0; j<n; j++) {
			
			cout << matriz[i*n+j];
			if (j!=(n-1)) cout << "\t";
		}
		
		cout << endl;
	}
}

void MatTraspuesta(double matriz[], int m, int n) {
	
	//Escribimos la matriz transpuesta por pantalla
	cout << "Y su transpuesta:" << endl;
	
	for (int i=0; i<m; i++) {
	
		for (int j=0; j<n; j++) {
			
			cout << matriz[j*m+i];
			if (j!=(n-1)) cout << "\t";
		}
		
		cout << endl;
	}
}
