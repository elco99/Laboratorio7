#pragma once
#include <string>
#include "personas.h"
#include <vector>
#include "objetos_evidencia.h"

using namespace std;

class Investigador:public Personas{
	int casos;
	int casos_cerrados;
	int casos_sin_resolver;
public:
	Investigador(string,string,string,int,string,string,int,int,int);
	Investigador(const Investigador&);
	int getCasos();
	int getCerrados();
	int getSinResolver();
	void setCasos(int);
	void setCerrados(int);
	void setSinResolver(int);
	virtual string toString(vector<Objetos_Evidencia>& )const;
};