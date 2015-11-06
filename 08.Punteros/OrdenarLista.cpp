//Este programa ordena una lista de números desde un fichero mediante un algoritmo burbuja

#include <iostream>
#include <fstream>
#include <new>

using namespace std;

void LeerLista(double lista[],int n);
void Ordenar(double lista[],int n);
void EscribirLista(double lista[],int n);


int main () {
	
	int numero;		//cantidad de numeros a ordenar
	double * lista;
	
	//Pedimos el número por pantalla
	cout << "Introduce el número de elementos a ordenar" << endl;
	cin >> numero;
	
	lista=new double[numero];
	
	//Leemos la lista de números	
	LeerLista(lista,numero);
	
	//Ordenamos la lista de número mediante un algoritmo burbuja
	Ordenar(lista,numero);

	//Escribimos la lista ordenada por pantalla
	EscribirLista(lista,numero);
	
	
	//Liberamos la memoria ocupada por lista
	delete[] lista;

	
	return 0;
}

void LeerLista(double lista[],int n) {

	//Abrimos el archivo
	ifstream leer;
	leer.open("OrdenarLista_input.dat");
	
	//Leemos la lista de números	
	for(int i=0; i<n; i++) {
		leer >> lista[i];
	}

	leer.close();
}

void Ordenar(double lista[],int n) {
	
	double aux;		//numero auxiliar para ordenar la lista
	
	//Ordenamos la lista de número mediante un algoritmo burbuja
	for(int j=0; j<n-1; j++) {
		
		for(int i=0; i<n-1; i++) {
			
			//Si el número anterior en la lista es mayor que el siguiente hay que intercambiarlos
			if (lista[i]>lista[i+1]) {
				aux=lista[i];
				lista[i]=lista[i+1];
				lista[i+1]=aux;
				
			}	
		}
	}
}

void EscribirLista(double lista[],int n) {
	
	//Escribimos la lista ordenada por pantalla
	cout << "La lista ordenada de " << n << " números es:" << endl;
	
	for(int i=0; i<n; i++) {
		cout << lista[i] << endl;
	}
}
