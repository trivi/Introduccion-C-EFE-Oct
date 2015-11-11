#include <iostream>
#include <cmath>

using namespace std;

const double pi=3.141592653589793;

class complejo {
	public:
		// Constructor
		complejo(double a2, double b2);
		// Funciones miembro de la clase "pareja"
		void Lee(double &a2, double &b2);
		void Guarda(double a2, double b2);
		double Modulo();
		double Argumento();
		
	private:
		// Datos miembro de la clase "pareja"
		double real, imaginaria; 
};

complejo::complejo(double a2, double b2) {
	real = a2;
	imaginaria = b2;
}

void complejo::Lee(double &a2, double &b2) {
	a2 = real;
	b2 = imaginaria;
}

void complejo::Guarda(double a2, double b2) {
	real = a2;
	imaginaria = b2;
}

double complejo::Modulo() {
	return sqrt(pow(real,2)+pow(imaginaria,2));
}

double complejo::Argumento() {
	
	if(real>0) 					return atan(imaginaria/real);
	if(imaginaria>=0&&real<0)	return atan(imaginaria/real)+pi;
	if(imaginaria<0&&real<0)	return atan(imaginaria/real)-pi;
	if(imaginaria>0&&real==0)	return pi/2.0;
	if(imaginaria<0&&real==0)	return -pi/2.0;
	
	if(real==0&&imaginaria==0)	cout << "El argumento no está definido" << endl;
	
}

int main() {
	complejo numero(12, 32);
	double x, y;

	numero.Lee(x, y);
	cout << "La parte real del número es " << x << endl;
	cout << "La parte imaginaria del número es " << y << endl;
	cout << "Y en representación polar:" << endl;
	cout << "El módulo del número es " << numero.Modulo() << endl;
	cout << "El argumento del número es " << numero.Argumento() << endl;
	
	//Hacemos otra prueba reescribiendo el valor de numero
	cout << "Introduce otro número complejo (parte real y parte imaginaria separadas por un espacio): ";
	cin >> x >> y;
	
	numero.Guarda(x,y);
	
	cout << "La parte real del número es " << x << endl;
	cout << "La parte imaginaria del número es " << y << endl;
	cout << "Y en representación polar:" << endl;
	cout << "El módulo del número es " << numero.Modulo() << endl;
	cout << "El argumento del número es " << numero.Argumento() << endl;
	
	
	return 0;
}
