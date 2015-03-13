#include <string>
#include "forense.h"
#include "personas.h"
#include <sstream>

using std::string;
using std::stringstream;

Forense::Forense(string fecha_ingreso, string horario_trabajo):Personas(nombre, user, password, edad, id, nacimiento){
	this->fecha_ingreso = fecha_ingreso;
	this->horario_trabajo = horario_trabajo;
}

string Forense::getFechaIngreso(){
	return fecha_ingreso;
}

string Forense::getHorario(){
	return horario_trabajo;
}

void Forense::setFechaIngreso(string){
	this->fecha_ingreso;
}

void Forense::setHorario(string){
	this->horario_trabajo;
}

string Forense::toString(){
	stringstream ss;
	ss << "Fecha de Ingreso: " << fecha_ingreso << " Horario de trabajo: " << horario_trabajo << Personas::toString();
	return ss.str();
}