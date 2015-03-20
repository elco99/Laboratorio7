#include <string>
#include "casos.h"
#include "secuestro.h"
#include <sstream>

using std::string;
using std::stringstream;

Secuestro::Secuestro(string victima, string lugar_secuestro, bool pide_rescate,
 					double cantidad, bool estado_victima,string num_caso,vector<Investigador> lista,
 					vector<Objetos_Evidencia> lista2,string hora_incidente,string fecha_incidente,bool abierto)
		 			:Casos(num_caso, lista,lista2,hora_incidente,fecha_incidente,abierto){
	this->victima = victima;
	this->lugar_secuestro = lugar_secuestro;
	this->pide_rescate = pide_rescate;
	this->cantidad = cantidad;
	this->estado_victima = estado_victima;
}

string Secuestro::getVictima(){
	return victima;
}

string Secuestro::getLugarSecuestro(){
	return lugar_secuestro;
}

bool Secuestro::getRescate(){
	return pide_rescate;
}

double Secuestro::getCantidad(){
	return cantidad;
}

bool Secuestro::getEstadoVictima(){
	return estado_victima;
}

void Secuestro::setVictima(string victima){
	this->victima = victima;
}

void Secuestro::setLugarSecuestro(string lugar_secuestro){
	this->lugar_secuestro = lugar_secuestro;	
}

void Secuestro::setRescate(bool pide_rescate){
	this->pide_rescate = pide_rescate;
}

void Secuestro::setCantidad(double cantidad){
	this->cantidad = cantidad;
}

void Secuestro::setEstadoVictima(bool estado_victima){
	this->estado_victima = estado_victima;
}

string Secuestro::toString(){
	stringstream ss;
	ss << "Victima: "<< getVictima() << ", Lugar: "<< getLugarSecuestro()<< ", Rescate: "<< getRescate() << ", Cantidad: "<<getCantidad()<<", Abierto: "<< Casos::getAbierto()<<", Estado: "<<getEstadoVictima();
	return ss.str();
}