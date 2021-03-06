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

void Objetos_Evidencia::setNombre(string nombre){
	this->nombre = nombre;
}
void Objetos_Evidencia::setTipoObjeto(string tipo_objeto){	
	this->tipo_objeto = tipo_objeto;
}
void Objetos_Evidencia::setLugar(string lugar){	
	this->lugar = lugar;
}

void Objetos_Evidencia::setHuellas(string huellas){	
	this->huellas = huellas;
}
void Objetos_Evidencia::setProsecado(string procesado){	
	this->procesado = procesado;
}


string Objetos_Evidencia::toString()const{
	stringstream ss;
	ss << "Nombre del objeto: " << nombre << "," << " Tipo de objeto: " << tipo_objeto << ", Lugar de hallazgo: " << lugar 
	   << ", Huellas: " << huellas << ", Procesado: " << procesado;
	return ss.str();
}
