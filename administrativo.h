#pragma once
#include <string>
#include "personas.h"
#include "casos.h"
#include <vector>
#include "secuestro.h"

using namespace std;
class Administrativo:public Personas{
	string clave, puesto;
public:

	Administrativo(string,string,string,int,string,string,string, string);
	Administrativo(const Administrativo&);
	string getClave();
	string getPuesto();
	void setClave(string);
	void setPuesto(string);
	virtual string toString(vector<Secuestro>&)const;
};
