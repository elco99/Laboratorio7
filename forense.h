#include <string>
#include "personas.h"
#include "homicidio.h"
#include <vector>
#include "casos.h"

using namespace std;

class Forense:public Personas{
	string fecha_ingreso, horario_trabajo;
public:
	Forense(string,string,string,int,string,string,string, string);
	string getFechaIngreso();
	string getHorario();
	void setFechaIngreso(string);
	void setHorario(string);
	virtual string toString(vector<Homicidio>&)const;

};