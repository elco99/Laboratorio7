#pragma once
#include <string>
#include "casos.h"

using std::string;
using namespace std;

class Secuestro:public Casos{
	string victima;
	string lugar_secuestro;
	bool pide_rescate;
	double cantidad;
	bool estado_victima;
public:
	Secuestro(string, string, bool, double, bool);
	string getVictima();
	string getLugarSecuestro();
	bool getRescate();
	double getCantidad();
	bool getEstadoVictima();
	void setVictima(string);
	void setLugarSecuestro(string);
	void setRescate(bool);
	void setCantidad(double);
	void setEstadoVictima(bool);
	string toString();
};