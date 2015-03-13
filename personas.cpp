#include "personas.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Personas::Personas(string nombre,string user,string password,int edad,string id,string nacimiento){
	this->nombre = nombre;
	this->user = user;
	this->password = password;
	this->edad = edad;
	this->id = id;
	this->nacimiento = nacimiento;
}
Personas::Personas(const Personas& other)
	:nombre(other.nombre),user(other.user),password(other.password),edad(other.edad),id(other.id),nacimiento(other.nacimiento){

}
string Personas::toString()const{
	stringstream ss;
	ss << "Nombre: "<<nombre;
	return ss.str();
}
string Personas::getNombre()const{
	return nombre;
}
void Personas::setNombre(string nombre){
	this->nombre = nombre;
}
string Personas::getUser(){
	return user;
}
void Personas::setUser(string user){
	this->user = user;
}
string Personas::getPassword(){
	return password;
}
void Personas::setPassword(string password){
	this->password = password;
}
int Personas::getEdad(){
	return edad;
}
void Personas::setEdad(int edad){
	this->edad = edad;
}
string Personas::getID(){
	return id;
}
void Personas::setID(string id){
	this->id = id;
}
string Personas::getNacimiento(){
	return nacimiento;
}
void Personas::setNacimiento(string nacimiento){
	this->nacimiento = nacimiento;
}