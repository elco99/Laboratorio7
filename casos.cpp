#include <string>
#include <vector>
#include "objetos_evidencia.h"
#include "investigador.h"
#include "casos.h"

Casos::Casos(string num_caso,vector<Investigador> lista,vector<Objetos_Evidencia> lista2,string hora_incidente,string fecha_incidente,bool abierto){
	this->num_caso = num_caso;
	this->lista = lista;
	this->lista2 = lista2;
	this->hora_incidente = hora_incidente;
	this->fecha_incidente = fecha_incidente;
	this->abierto = abierto;
}
Casos::Casos(const Casos& other):
	num_caso(other.num_caso),lista(other.lista),lista2(other.lista2),hora_incidente(other.hora_incidente),fecha_incidente(other.fecha_incidente),abierto(other.abierto){

}
string Casos::getNumCaso(){
	return num_caso;
}
void Casos::setNumCaso(string num_caso){
	this->num_caso = num_caso;
}
vector<Investigador> Casos::getLista(){
	return lista;
}
void Casos::setLista(vector<Investigador> lista){
	this->lista = lista;
}
vector<Objetos_Evidencia> Casos::getLista2(){
	return lista2;
}
void Casos::setLista2(vector<Objetos_Evidencia> lista2){
	this->lista2 = lista2;
}
string Casos::getHora(){
	return hora_incidente;
}
void Casos::setHora(string hora_incidente){
	this->hora_incidente = hora_incidente;
}
string Casos::getFecha(){
	return fecha_incidente;
}
void Casos::setFehca(string fecha_incidente){
	this->fecha_incidente = fecha_incidente;
}
bool Casos::getAbierto(){
	return abierto;
}
void Casos::setAbierto(bool abierto){
	this->abierto = abierto;
}