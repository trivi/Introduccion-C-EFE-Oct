#include <iostream> 
using namespace std;
 
class pareja {
	private:
		//Datos miembro de la clase "pareja"
		int a, b; 
	public:
		// Funciones miembro de la clase "pareja"
		void Lee(int &a2, int &b2);		//Declaramos la función Lee que definiremos más tarde
		void Guarda(int a2, int b2) {	//Definimos la función Guarda (sólo como ejemplo, será tratada como inline por lo tanto es preferible siempre posponer la definición)
			a = a2;
			b = b2;
		}
};

void pareja::Lee(int &a2, int &b2) {	//El uso de punteros es para poder extraer datos desde la función
										//(se igualan las direcciones a donde apuntan las variables internas y de entrada)
	a2 = a;
	b2 = b;
}

int main() {
	pareja par1;	//Creamos una variable/objeto de la clase "pareja"
	int x, y;		//Creamos 2 enteros para leer los valores de las variables internas de "par1"
	
	par1.Guarda(12, 32);	//Los mensajes/llamadas a métodos de un objeto se realizan mediante el punto (hay que especificar)
	par1.Lee(x, y);
	cout << "Valor de par1.a: " << x << endl;
	cout << "Valor de par1.b: " << y << endl;

	return 0;
}
