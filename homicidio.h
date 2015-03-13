#pragma once
#include <string>
#include "casos.h"
#include "personas.h"
#include <vector>
using namespace std;
class Homicidio:public Casos{
	string culpable, victima, sospechoso_principal;
	vector <string> sospechosos;
public:

	Homicidio(string, vector <string>,string ="", string ="");
	string getCulpable();
	string getVictima();
	string getSospechoso_Principal();
	vector<string> getSospechosos();

	
	void setCulpable(string);
	void setVictima(string);
	void setSospechoso_Principal(string);
	void setSospechosos(vector <string>);
};