#include <string>
#include "administrativo.h"
#include "personas.h"
using namespace std;
// nombre user password, edad,  id nacimiento
Administrativo::Administrativo(string clave, string puesto):Personas(nombre ,user,  password,  edad, id, nacimiento){
	this->clave = clave;
	this->puesto = puesto;
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
string Administrativo::toString(){
	return "";
}