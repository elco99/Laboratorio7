#pragma once
#include <string>
#include <vector>
#include "objetos_evidencia.h"
#include "investigador.h"

using std::string;
using std::vector;

class Casos{
protected:
	string num_caso;
	vector<Investigador> lista;
	vector<Objetos_Evidencia> lista2;
	string hora_incidente;
	string fecha_incidente;
	bool abierto;
public:
	Casos(string, vector<Investigador> ,vector<Objetos_Evidencia>, string, string, bool);
	Casos(const Casos&);
	string getNumCaso();
	void setNumCaso(string);
	vector<Investigador> getLista();
	void setLista(vector<Investigador>);
	vector<Objetos_Evidencia> getLista2();
	void setLista2(vector<Objetos_Evidencia>);
	string getHora();
	void setHora(string);
	string getFecha();
	void setFehca(string);
	bool getAbierto();
	void setAbierto(bool);
};