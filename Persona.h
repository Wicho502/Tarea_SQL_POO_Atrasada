#include <iostream>
using namespace std;

class Persona{
	//Atributos
protected: string nombre, apellidos, direccion, fecha_nacimiento;
		 int telefono = 0;

	//Constructor
protected: 
	Persona() {

	}
	Persona(string nom, string ape, string dir, int tel, string fn) {
		nombre = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;


	}

};

