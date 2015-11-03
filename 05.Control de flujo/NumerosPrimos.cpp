//Este programa calcula los primos hasta un número

#include <iostream>
#include <fstream>


using namespace std;

int main () {
	
	int primos_max=1000;				//para poder modificar el programa y que acepte más números primos
	bool numeros[primos_max-1]={ };		//inicializamos a 0 el vector completo de los numeros hasta "mil"
										//(menos el 1 que no se considera primo)
										//0=Primo	1=NoPrimo
	int numero_primos=0;				//Un contador para saber cuantos primos hay en la lista final
	int primo[primos_max]={};			//vector donde almacenaremos los números primos
	

	
	//Abrimos el archivo para escribir la salida
	ofstream escribir;
	escribir.open("NumerosPrimos_output.dat");
	
	
	//Para cada primo eliminamos todos sus multiplos
	for (int i=0; i<primos_max-1; i++) {		//i+2 será el número representado en la componente del vector numeros
		
		if (numeros[i]==0) {
			primo[numero_primos]=i+2;	//guardamos el primos
			
			
			for (int j=primo[numero_primos]; (j*primo[numero_primos])<=primos_max; j++) {
				
				 numeros[primo[numero_primos]*j-2]=1;
				
			}
			
			numero_primos++;			//aumentamos en 1 el número de primos encontrados
			
		}
		
		
	}
	
	//Escribimos en un fichero los números primos encontrados (también lo escribimos por pantalla)
	for (int i=0; i<numero_primos; i++) {
		
		escribir << primo[i] << endl;

//		cout << primo[i] << endl;
		
	}
	

	
	
	escribir.close();
	
	return 0;
	
}
