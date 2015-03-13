#pragma once
#include <string>
#include "personas.h"

using std::string;
class Administrativo:public Personas{
	string clave, puesto;
public:

	Administrativo(string, string);
	string getClave();
	string getPuesto();
	void setClave(string);
	void setPuesto(string);
	string toString();
};
