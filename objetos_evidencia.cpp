#include "objetos_evidencia.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Objetos_Evidencia::Objetos_Evidencia(string nombre, string tipo_objeto, string lugar, string huellas, string procesado){
	this->nombre = nombre;
	this->tipo_objeto = tipo_objeto;
	this->lugar = lugar;
	this->huellas = huellas;
	this->procesado = procesado;
}

string Objetos_Evidencia::getNombre()const{
	return nombre;
}

string Objetos_Evidencia::getTipoObjeto()const{
	return tipo_objeto;
}

string Objetos_Evidencia::getLugar()const{
	return lugar;
}

string Objetos_Evidencia::getHuellas()const{
	return huellas;
}

string Objetos_Evidencia::getProsecado()const{
	return procesado;
}

string Objetos_Evidencia::toString()const{
	stringstream ss;
	ss << "Nombre del objeto: " << nombre << " " << " Tipo de objeto: " << tipo_objeto << " Lugar de hallazgo: " << lugar 
	   << " ¿Tiene huellas? " << huellas << " ¿Ha sido procesada? " << procesado;
	return ss.str();
}
