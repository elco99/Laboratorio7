#include <string>
#include <sstream>
#include "administrativo.h"
#include "personas.h"
#include "casos.h"
#include "secuestro.h"
#include <vector>

using namespace std;
// nombre user password, edad,  id nacimiento
Administrativo::Administrativo(string nombre ,string user, string password,int edad, string id, string nacimiento,string clave, string puesto):Personas(nombre ,user,  password,  edad, id, nacimiento){
	this->clave = clave;
	this->puesto = puesto;
}
Administrativo::Administrativo(const Administrativo& other):Personas(other){

}
string Administrativo::getClave(){
	return clave;
}
string Administrativo::getPuesto(){
	return puesto;
}
void Administrativo::setClave(string clave){
	this->clave = clave;
}
void Administrativo::setPuesto(string){
	this->puesto = puesto;	
}
string Administrativo::toString(vector<Secuestro>& secuestro)const{
	stringstream ss;

	for(int i = 0; i < secuestro.size(); i++){
		ss << "Secuestro " << i+1 << ") " << secuestro[i].toString() << endl;
	 }
	
	return ss.str();
}