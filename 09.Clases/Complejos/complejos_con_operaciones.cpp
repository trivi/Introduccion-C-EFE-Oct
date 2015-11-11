#include <iostream>
#include <cmath>

using namespace std;

const double pi=3.141592653589793;

class complejo {
	public:
		// Constructor
		complejo(double a2=0, double b2=0) : real(a2), imaginaria(b2) {}
		// Funciones miembro de la clase "pareja"
		void Lee(double &a2, double &b2);
		void Guarda(double a2, double b2);
		double Modulo();
		double Argumento();
		
	private:
		// Datos miembro de la clase "pareja"
		double real, imaginaria; 
};

/*******************************Declaracion de funciones sobrecargadas para complejos*********************************/
complejo operator +(complejo a, complejo b);
complejo operator -(complejo a, complejo b);
complejo operator *(complejo a, complejo b);
complejo operator /(complejo a, complejo b);



int main() {
	complejo numero1, numero2;	//Dos números a leer por teclado
	double x, y;		//Auxiliares para leer y escribir las partes real e imaginaria
	
	complejo suma, resta, producto, cociente;
	
	//Pedimos el primer número
	cout << "Introduce un número complejo (parte real y parte imaginaria separadas por un espacio): ";
	cin >> x >> y;
	
	numero1.Guarda(x,y);
	
	//Pedimos el segundo número
	cout << "Introduce otro número complejo (parte real y parte imaginaria separadas por un espacio): ";
	cin >> x >> y;
	
	numero2.Guarda(x,y);
	
	//Hacemos las operaciones y guardamos sus resultados
	suma=numero1+numero2;
	resta=numero1-numero2;
	producto=numero1*numero2;
	cociente=numero1/numero2;
	
	
	//Espaciamos los resultados
	cout << "\n\n";
	
/*********************************Escribimos los resultados por pantalla************************************/
	numero1.Lee(x, y);
	cout << "El primer número es " << x;
	if(y>=0) cout << "+";		//Para que no haya 2 signos si la parte imaginaria es negativa
	cout << y << "i" << endl;
	
	numero2.Lee(x, y);
	cout << "El segundo número es " << x;
	if(y>=0) cout << "+";
	cout << y << "i" << endl;
	
	suma.Lee(x, y);
	cout << "El resultado de su suma es " << x;
	if(y>=0) cout << "+";
	cout << y << "i" << endl;
	
	resta.Lee(x, y);
	cout << "El resultado de su resta es " << x;
	if(y>=0) cout << "+";
	cout << y << "i" << endl;
	
	producto.Lee(x, y);
	cout << "El resultado de su producto es " << x;
	if(y>=0) cout << "+";
	cout << y << "i" << endl;
	
	cociente.Lee(x, y);
	cout << "El resultado de su cociente es " << x;
	if(y>=0) cout << "+";
	cout << y << "i" << endl;
	
	
	return 0;
}

/****************************Definición de los métodos de la clase complejo********************************/
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

/*******************************Funciones sobrecargadas para complejos*********************************/
complejo operator +(complejo a, complejo b) {
	
	complejo temp;		//Donde almacenar la suma
	double a1, a2, b1, b2;		//Donde almacenar las partes reales e imaginarias de "a" y "b"
	
	//Leemos los dos números complejos
	a.Lee(a1,a2);
	b.Lee(b1,b2);
	
	temp.Guarda(a1+b1,a2+b2);	//Hacemos la suma y la guardamos en "temp"
	
	return temp;
}


complejo operator -(complejo a, complejo b) {
	
	complejo temp;		//Donde almacenar la resta
	double a1, a2, b1, b2;		//Donde almacenar las partes reales e imaginarias de "a" y "b"
	
	//Leemos los dos números complejos
	a.Lee(a1,a2);
	b.Lee(b1,b2);
	
	temp.Guarda(a1-b1,a2-b2);	//Hacemos la suma y la guardamos en "temp"
	
	return temp;
}


complejo operator *(complejo a, complejo b) {
	
	complejo temp;		//Donde almacenar el producto
	double modulo_temp, argumento_temp;		//Donde almacenar el argumento y el módulo del número compejo "temp"
	
	//Calculamos el módulo y el argumento del complejo resultante
	modulo_temp=a.Modulo()*b.Modulo();
	argumento_temp=a.Argumento()+b.Argumento();
	
	//Lo guardamos en su fórmula trigonométrica usando la fórmula de Euler:  z=r(cos(fi)+i sin(fi))
	temp.Guarda(modulo_temp*cos(argumento_temp), modulo_temp*sin(argumento_temp));
	
	return temp;
}


complejo operator /(complejo a, complejo b) {
	
	complejo temp;		//Donde almacenar el cociente
	double modulo_temp, argumento_temp;		//Donde almacenar el argumento y el módulo del número compejo "temp"
	
	//Calculamos el módulo y el argumento del complejo resultante
	modulo_temp=a.Modulo()/b.Modulo();
	argumento_temp=a.Argumento()-b.Argumento();
	
	//Lo guardamos en su fórmula trigonométrica usando la fórmula de Euler:  z=r(cos(fi)+i sin(fi))
	temp.Guarda(modulo_temp*cos(argumento_temp), modulo_temp*sin(argumento_temp));
	
	return temp;
}



