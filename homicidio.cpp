#include <string>
#include "administrativo.h"
#include "personas.h"
#include "homicidio.h"
#include <vector>

Homicidio::Homicidio(string sospechoso_principal, vector <string> sospechosos,string victima, string culpable):Casos(num_caso, lista,lista2,hora_incidente,fecha_incidente,abierto){
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
void Homicidio::setSospechosos(vector <string> sospechosos){
	this->sospechosos = sospechosos;
}