#pragma once
#include <string>
#include "personas.h"

using std::string;

class Investigador:public Personas{
	int casos;
	int casos_cerrados;
	int casos_sin_resolver;
public:
	Investigador(int,int,int);
	Investigador(const Investigador&);
	int getCasos();
	int getCerrados();
	int getSinResolver();
	void setCasos(int);
	void setCerrados(int);
	void setSinResolver(int);
	string toString();
};