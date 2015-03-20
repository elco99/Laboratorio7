#include <string>
#include "administrativo.h"
#include "objetos_evidencia.h"
#include "personas.h"
#include "casos.h"
#include "homicidio.h"
#include <sstream>
#include <vector>

using std::stringstream;
using std::string;

Homicidio::Homicidio(string num_caso,vector<Investigador> lista,vector<Objetos_Evidencia> lista2,string hora_incidente,string fecha_incidente,bool abierto, vector<string> sospechosos, string sospechoso_principal, string victima, string culpable)
					:Casos(num_caso, lista,lista2,hora_incidente,fecha_incidente,abierto){
	this->sospechosos = sospechosos;
	this->sospechoso_principal = sospechoso_principal;
	this->victima = victima;
	this->culpable = culpable;

}
string Homicidio::getCulpable(){
	return culpable;
}
string Homicidio::getVictima(){
	return victima;
}
string Homicidio::getSospechoso_Principal(){
	return sospechoso_principal;
}
vector<string> Homicidio::getSospechosos(){
	return sospechosos;
}

void Homicidio::setCulpable(string culpable){
	this->culpable = culpable;
}
void Homicidio::setVictima(string victima){	
	this->victima = victima;
}
void Homicidio::setSospechoso_Principal(string sospechoso_principal){	
	this->sospechoso_principal = sospechoso_principal;
}
void Homicidio::setSospechosos(vector<string> sospechosos){
	this->sospechosos = sospechosos;
}

string Homicidio::toString()const{
	stringstream ss;
	ss << "Sospechosos: ";
	for(int i = 0;i < sospechosos.size();i++){
		ss << sospechosos[i]<< ", ";
	}
	if(!abierto){
		ss << endl << "Sospechoso Principal: "<< sospechoso_principal<< ", Culpable: "<< culpable << ", Victima: "<<victima; 
	}else{
		ss << endl << "Sospechoso Principal: "<< sospechoso_principal<< ", Culpable: "<< "desconocido" << ", Victima: "<<victima; 
	}
	return ss.str();
	
}