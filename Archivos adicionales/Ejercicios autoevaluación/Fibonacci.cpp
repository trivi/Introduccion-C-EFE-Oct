//Este programa calcula los 100 primeros términos de la sucesión de Fibonacci y los escribe en un fichero
//
//Dato: La sucesión comienza con los números 1 y 1, y a partir de estos cada término es la suma de los dos anteriores:
//1, 1, 2, 3, 5, 8, 13, 21...

#include <iostream>
#include <fstream>


using namespace std;

int main () {
	
	//Declaración de variables
	double fib[3]={1,1,1};				//Declaramos e inicializamos los 2 primeros términos de la sucesión de Fibonacci
									//y un 3º para usar de "auxiliar"
	int n=100;						//Índice para poder cambiar el número de términos que calculamos con facilidad
	

	//Abrimos el archivo para escribir la salida
	ofstream escribir;
	escribir.open("fibonacci_output.dat");
	
	
//	//Escribimos los 2 primeros términos (conocidos) de la sucesión de Fibonacci
	escribir << 1 << endl;
	escribir << 1 << endl;
	
	//Alternativa para mostrarlos en una gráfica
//	escribir << 1 << "\t" << 1 << endl;
//	escribir << 2 << "\t" << 1 << endl;
	
	
	//Creamos un bucle que calcule los n primeros términos de la sucesión de Fibonacci
	for (int i=2; i<n; i++) {		//El bucle empieza en 2 porque ya hemos escrito los 2 primeros términos
		
		fib[3]=fib[1]+fib[2];		//Calculamos el siguiente término de la sucesión
		escribir << fib[3] << endl;	//Escribimos en el archivo el nuevo término

//		Alternativa para una gráfica
//		escribir << i+1 << "\t" << fib[3] << endl;
		
		//Reasignamos el valor a los dos "primeros" términos de la serie de Fibonacci para la siguiente iteración
		fib[1]=fib[2];
		fib[2]=fib[3];
		
	}
	
	
	//Cerramos el archivo que creamos para escribir
	escribir.close();
	
	return 0;
	
}
