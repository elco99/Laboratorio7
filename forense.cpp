
#include "forense.h"

#include <sstream>




//using namespace std;

Forense::Forense(string nombre ,string user, string password,int edad, string id, string nacimiento,string fecha_ingreso, string horario_trabajo)
				:Personas(nombre, user, password, edad, id, nacimiento){
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

string Forense::toString(vector<Homicidio>& homicidio)const{
	stringstream ss;

	for(int i = 0; i < homicidio.size(); i++){
		ss << "Homicidio " << i+1 << ") " << homicidio[i].toString() << endl;
	 }
	
	return ss.str();
}