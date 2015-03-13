#include "investigador.h"
#include "personas.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Investigador::Investigador(int casos,int casos_cerrados,int casos_sin_resolver):Personas(nombre ,user,  password,  edad, id, nacimiento){
	this->casos = casos;
	this->casos_cerrados = casos_cerrados;
	this->casos_sin_resolver = casos_sin_resolver;
}
Investigador::Investigador(const Investigador& other):Personas(other){

}
int Investigador::getCasos(){
	return casos;
}
int Investigador::getCerrados(){
	return casos_cerrados;
}
int Investigador::getSinResolver(){
	return casos_sin_resolver;
}
void Investigador::setCasos(int casos){
	this->casos = casos;
}
void Investigador::setCerrados(int casos_cerrados){
	this->casos_cerrados = casos_cerrados;
}
void Investigador::setSinResolver(int casos_sin_resolver){
this->casos_sin_resolver = casos_sin_resolver;
}
string Investigador::toString(){
	return "";
}