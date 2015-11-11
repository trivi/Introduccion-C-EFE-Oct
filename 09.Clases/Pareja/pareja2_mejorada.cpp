#include <iostream> 
using namespace std;
 
class pareja {
	public:
		//Constructor sobrecargado con valores por defecto
		pareja(int a2=0, int b2=0) : a(a2), b(b2) {}
		//Funciones miembro de la clase "pareja"
		void Lee(int &a2, int &b2);
		void Guarda(int a2, int b2);
	private:
		//Datos miembro de la clase "pareja"
		int a, b; 
};


void pareja::Lee(int &a2, int &b2) {
	a2 = a;
	b2 = b;
}

void pareja::Guarda(int a2, int b2) {
	a = a2;
	b = b2;
}

int main() {
	//Prueba inicializando a valores dados
	pareja par1(12, 32);
	
	//Prueba inicializando a valores nulos
	//pareja par1;
	
	int x, y;
	
	par1.Lee(x, y);
	cout << "Valor de par1.a: " << x << endl;
	cout << "Valor de par1.b: " << y << endl;
	
	return 0;
}
