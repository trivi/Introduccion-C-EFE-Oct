//Código escrito originalmente por Demetrio Carmona
//Este programa escribe en el archivo "NumerosPrimos_output.dat" los números primos menores que 1000

#include <iostream>
#include <fstream>


using namespace std;

int main() {

	int lista[1000];	//Definimos un vector con 1000 espacios para almacenar los número primos que encontremos
	int encontrados=1;	//Variable que almacena el número de primos encontrados. Inicializamos a 1 porque ya damos el 2 como primo.
	lista[0]=2;			//Como dijimos previamente, aportamos al programa el 2 como número primo.

	bool EsPrimo;		//Es una variable auxiliar que usaremos para determina si un número es considerado primo o no. Si EsPrimo=1 es primo y si EsPrimo=0 entonces no es primo.

	//Abrirmos el fichero en el que vamos a escribir
	ofstream escribir;
	escribir.open("NumerosPrimos_output.dat");


	//Obtenemos los numeros primos
	for(int i=3;i<1000;i++){
	
		EsPrimo=1;		//Asumimos inicialmente que el número es primo. Si no lo es lo cambiaremos más adelante.
		
		//Comprobamos si i es divisible entre alguno de los primos anteriores (los que ya hemos encontrado)
		for(int k=0;k<encontrados;k++) {
			
			//Si es divisible por alguno de los primos de la lista entonces no es primo => EsPrimo=0
			if (i%lista[k] == 0) {			
				EsPrimo=0;
			}
		}			
		
		//Si el for anterior nos da como resultado que i primo lo guardamos e incrementamos el número de números primos encontrados
		if(EsPrimo==1) {
			lista[encontrados]=i;
			encontrados++;
		}
	}


	//Escribimos la lista de primos obtenidos en el archivo
	for(int i=0; i<encontrados; i++) {
		escribir << lista[i] << "\n";
	}
	
	
	//Destruimos el objeto para escribir
	escribir.close();
	
	
	return 0;
	
}
