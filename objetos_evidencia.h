#pragma once
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

class Objetos_Evidencia{
	string nombre, tipo_objeto, lugar, huellas, procesado;
public:
	Objetos_Evidencia(string, string, string,string, string);
	string getNombre()const;
	string getTipoObjeto()const;
	string getLugar()const;
	string getHuellas()const;
	string getProsecado()const;	

	void setNombre(string);
	void setTipoObjeto(string);
	void setLugar(string);
	void setHuellas(string);
	void setProsecado(string);	

	string toString()const;
};