//Este programa ordena una lista de números desde un fichero mediante un algoritmo burbuja

#include <iostream>
#include <fstream>


using namespace std;

int main () {
	
	int numero;		//cantidad de numeros a ordenar
	double aux;		//numero auxiliar para ordenar la lista
	double lista[1000];
	
	//Abrimos el archivo
	ifstream leer;
	leer.open("OrdenarLista_input.dat");
	
	
	//Pedimos el número por pantalla
	cout << "Introduce el número de elementos a ordenar" << endl;
	cin >> numero;
	
	//Leemos la lista de números	
	for(int i=0; i<numero; i++) {
		leer >> lista[i];
	}
	
	
	//Ordenamos la lista de número mediante un algoritmo burbuja
	for(int j=0; j<numero-1; j++) {
		
		for(int i=0; i<numero-1; i++) {
			
			//Si el número anterior en la lista es mayor que el siguiente hay que intercambiarlos
			if (lista[i]>lista[i+1]) {
				aux=lista[i];
				lista[i]=lista[i+1];
				lista[i+1]=aux;
				
			}	
		}
	}
	

	//Escribimos la lista ordenada por pantalla
	cout << "La lista ordenada de " << numero << " números es:" << endl;
	
	for(int i=0; i<numero; i++) {
		cout << lista[i] << endl;
	}
	
	
	
	leer.close();
	
	return 0;
	
}
