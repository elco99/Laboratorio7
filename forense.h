#include <string>
#include "personas.h"

using std::string;

class Forense:public Personas{
	string fecha_ingreso, horario_trabajo;
public:
	Forense(string, string);
	string getFechaIngreso();
	string getHorario();
	void setFechaIngreso(string);
	void setHorario(string);
	string toString();
};