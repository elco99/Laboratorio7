#pragma once
#include <string>

using std::string;

class Personas{
	//nombre real, nombre de usuario, contraseña, edad, cédula de identidad y fecha de nacimiento
protected:
	string nombre;
	string user;
	string password;
	int edad;
	string id;
	string nacimiento;
public:
	Personas(string,string,string,int,string,string);
	Personas(const Personas&);
	string toString()const;
	string getNombre()const;
	void setNombre(string);
	string getUser();
	void setUser(string);
	string getPassword();
	void setPassword(string);
	int getEdad();
	void setEdad(int);
	string getID();
	void setID(string);
	string getNacimiento();
	void setNacimiento(string);

};