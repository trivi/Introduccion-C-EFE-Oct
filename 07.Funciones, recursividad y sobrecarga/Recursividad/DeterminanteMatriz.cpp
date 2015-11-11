//El programa lee una matriz nxn de un fichero y muestra por pantalla la matriz y devuelve su determinante

#include <iostream>
#include <fstream>
#include <new>

void Leer(double matriz[], int n);
void MatNormal(double matriz[], int n);
double Det(double matriz[], int n);
void Reducidas(double matriz[], double MatrizRed[], int n);

using namespace std;

int main () {
	
	int n=4;				//Orden de la matríz. m->nº de filas. n->nº de columnas.
	double * matriz;			//puntero donde se almacena la matriz
	matriz=new double[n*n];		//Dimensionamos la matriz del tamaño deseado
	
	
	//Leemos la matriz de un archivos
	Leer(matriz,n);
	
	//Escribimos la matriz por pantalla
	MatNormal(matriz,n);
	
	cout << "Y su determinante es " << Det(matriz,n) << endl;
	
	
	return 0;
}


void Leer(double matriz[], int n) {

	//Iniciamos y abrimos los archivos que vamos a utilizar
	ifstream leer;
	leer.open("DeterminanteMatriz_input.dat");
	
	//Leemos los valores de los elementos de la matriz
	for (int i=0; i<n; i++) {
	
		for (int j=0; j<n; j++) {
			
			leer >> matriz[i*n+j];
		}
	}

	//Cerramos los archivos usados
	leer.close();
}

void MatNormal(double matriz[], int n) {
	
	//Escribimos la matriz por pantalla
	cout << "La matriz es:" << endl;
	
	for (int i=0; i<n; i++) {
	
		for (int j=0; j<n; j++) {
			
			cout << matriz[i*n+j];
			if (j!=(n-1)) cout << "\t";
		}
		
		cout << endl;
	}
}

double Det(double matriz[], int n) {
	
	if (n==1) return matriz[0];
	
/*****************Declaración de variables******************/	
	double resultado=0;		//Variable donde almacenar el resultado
	int paridad=1;			//Para poder hacer la cuenta de (-1)^(i+j) previamente mediante un if

	//Escribimos la relación de recursividad
	int j=0;	//fijamos j=0 (nos movemos en la primera columna)
	
	//Antes de hacer la sumatoria definimos el conjunto de "matrices" de un orden menos
	double * MatrizRed;
	MatrizRed = new double[(n-1)*(n-1)*n];		//Habrá n matrices de orden n-1
	
	//Generamos las matrices reducidas
	Reducidas(matriz,MatrizRed,n);
	
	for (int i=0; i<n; i++) {
		
		if((i+j)%2==0) paridad=1;	//Determinamos si el término suma o resta
		else paridad=-1;
		
		resultado=resultado+paridad*matriz[i*n+j]*Det(MatrizRed+i*(n-1)*(n-1),n-1);
												//MatrizRed+i*(n-1)*(n-1) mueve el puntero al inicio de cada matriz reducida
	}
	
	return resultado;
}

void Reducidas(double matriz[], double MatrizRed[], int n) {
	
	int cont=0;			//un contador para ir escribiendo el vector en orden
	
	for(int k=0; k<n; k++) {	//el indice k representa las distintas matrices k's distintos implican cambio de matriz
		
		for(int i=0; i<n; i++) {
			
			for(int j=1; j<n; j++) {
				
				if(i!=k) {
					MatrizRed[cont]=matriz[i*n+j];
					cont++;	
				}
			}
		}
	}
	
}






