/********************************************************************************************/
/****Primer programa. Muestra por pantalla la frase "Hola mundo" y después salta de línea****/
/********************************************************************************************/

#include <iostream>			//Incluimos el paquete iostream, necesario para usar "cin" y "cout". Lo incluye el precompilador.

using namespace std;		//Evitamos tener que escribir 'std::' delante de cada "cin", "cout" o "endl"

int main() {				//función principal, que existe en todos lo programas, es donde se inicia la ejecución
	
	cout << "Hola mundo" << "\n";		//Imprimimos por pantalla la frase "Hola mundo" y a continuación imprimimos un salto de línea "\n"
	
	return 0;				//Forma parte de un convenio muy extendido, cuando un programa finaliza sin errores el valor devuelto es "0"
}

//Es conveniente usar el tabulador para que se vean claramente las instrucciones agrupadas
