/********************************************************************************************/
/****Primer programa. Muestra por pantalla la frase "Hola mundo" y después salta de línea****/
/********************************************************************************************/

#include <iostream>			//Incluimos el paquete iostream, necesario para usar "cin" y "cout". Lo incluye el precompilador.


int main() {				//función principal, que existe en todos lo programas, es donde se inicia la ejecución
	
	std::cout << "Hola mundo" << std::endl;		//Imprimimos por pantalla la frase "Hola mundo" y a continuación imprimimos un salto de línea "\n"
	
	return 0;				//Forma parte de un convenio muy extendido, cuando un programa finaliza sin errores el valor devuelto es "0"
}

//Es conveniente usar el tabulador para que se vean claramente las instrucciones agrupadas
//Hay que terminar cada instrucción con un punto y coma OBLIGATORIO
