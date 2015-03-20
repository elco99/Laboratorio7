#include "investigador.h"
#include <sstream>

using namespace std;

Investigador::Investigador(string nombre,string user, string password, int edad,string id,string nacimiento,int casos,int casos_cerrados,int casos_sin_resolver)
						  :Personas(nombre, user, password, edad, id, nacimiento){
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
string Investigador::toString(vector<Objetos_Evidencia>& evidencia)const{
	stringstream ss;
	for(int i = 0; i < evidencia.size(); i++){
		ss << "Evidencia " << i+1 << ") " << evidencia[i].toString() << endl;
	 }
	return ss.str();
}