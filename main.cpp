#include <iostream>
#include "objetos_evidencia.h"//objeto de evidencias
#include "personas.h"
#include "forense.h"
#include "homicidio.h"
#include "secuestro.h"
#include "investigador.h"
#include "administrativo.h"
#include <cstdlib>
#include "casos.h"
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv){
	int op,op1;
	
	vector<Investigador>investigador;
	vector<Forense> forense;
	vector<Administrativo> administrativo;
	vector<Casos> cases;
	vector<Secuestro> secuestros;
	vector<Homicidio> homicidio;
	vector<Objetos_Evidencia> ev;
	do{
		Personas* person1;
		cout << "1. Agregar Personal"<<endl<<
				"2. Agregar Objetos Evidencias"<<endl<<
				"3. Eliminar Personal"<<endl<<
				"4. Reportería"<< endl<<
				"5. Agregar Casos" << endl<<
				"6. Salir"<<endl;
		cin >> op;
		switch(op){
			case 1:{
				cout << "1. Personal Administrativo"<<endl<<
						"2. Investigador"<< endl <<
						"3. Forense"<<endl;
				cin >> op1;
				switch(op1){
					case 1:{//administrativo
						string nombre,user,password,id,nacimiento,clave,puesto;
						int edad;
						cout << "Ingrese el nombre del personal administrativo: ";
						cin >> nombre;
						cout << "Ingrese el usuario del personal administrativo: ";
						cin >> user;
						cout << "Ingrese la contraseña del personal administrativo: ";
						cin >> password;
						cout << "Ingrese la edad del personal administrativo: ";
						cin >> edad;
						cout << "Ingrese el ID del personal administrativo: ";
						cin >> id;
						cout << "Ingrese la fecha de nacimiento del personal administrativo: ";
						cin >> nacimiento;
						cout << "Ingrese la clave del personal administrativo: ";
						cin >> clave;
						cout << "Ingrese el puesto en el organigrama del personal administrativo: ";
						cin >> puesto;
						Administrativo adm(nombre,user,password,edad,id,nacimiento,clave,puesto);
						administrativo.push_back(adm);
					}break;
					case 2:{//investigador
						string nombre,user,password,id,nacimiento;
						int edad,caso_atendido,casos_cerrados,casos_sin_resolve;
						cout << "Ingrese el nombre del Investigador: ";
						cin >> nombre;
						cout << "Ingrese el usuario del Investigador: ";
						cin >> user;
						cout << "Ingrese la contraseña del Investigador: ";
						cin >> password;
						cout << "Ingrese la edad del Investigador: ";
						cin >> edad;
						cout << "Ingrese el ID del Investigador: ";
						cin >> id;
						cout << "Ingrese la fecha de nacimiento del Investigador: ";
						cin >> nacimiento;
						cout << "Ingrese los casos atendidos del Investigador: ";
						cin >> caso_atendido;
						cout << "Ingrese los casos cerrados del Investigador: ";
						cin >> casos_cerrados;
						cout << "Ingrese los casos sin resolver del Investigador: ";
						cin >> casos_sin_resolve;
						Investigador inv(nombre,user,password,edad,id,nacimiento,caso_atendido,casos_cerrados,casos_sin_resolve);
						investigador.push_back(inv);
					}break;
					case 3:{//forense
						string nombre,user,password,id,nacimiento,fecha_ingreso,horario;
						int edad;
						cout << "Ingrese el nombre del Forense: ";
						cin >> nombre;
						cout << "Ingrese el usuario del Forense: ";
						cin >> user;
						cout << "Ingrese la contraseña del Forense: ";
						cin >> password;
						cout << "Ingrese la edad del Forense: ";
						cin >> edad;
						cout << "Ingrese el ID del Forense: ";
						cin >> id;
						cout << "Ingrese la fecha de nacimiento del Forense: ";
						cin >> nacimiento;
						cout << "Ingrese la fecha de ingreso del Forense: ";
						cin >> fecha_ingreso;
						cout << "Ingrese el horario del Forense: ";
						cin >> horario;
						Forense frs(nombre,user,password,edad,id,nacimiento,fecha_ingreso,horario);
						forense.push_back(frs);
					}break;
				}
			}break;
			case 2:{//objetos evidencias
				string user,pass;
				cout << "Ingrese el username: ";
				cin >> user;
				cout << "Ingrese el password: ";
				cin >> pass;
				bool real=false;

				if(real == false){
					for(int i = 0;i < investigador.size();i++){
						if(investigador[i].getUser() == user && investigador[i].getPassword() == pass ){
							cout <<investigador[i].toString(ev)<<endl;
							real = true;
							break;
						}
					}
				}
				if(real == true){
					string nombre, tipo_objeto, lugar, huellas, procesado;
					cout << "Nombre del objeto: "<<endl;
					cin >> nombre;
					cout << "Tipo del objeto: "<<endl;
					cin >> tipo_objeto;
					cout << "Lugar de hallazgo del objeto: "<<endl;
					cin >> lugar;
					cout << "Huellas en el objeto(si/no): "<<endl;
					cin >> huellas;
					cout << "Procesado del objeto(si/no): "<<endl;
					cin >> procesado;
					Objetos_Evidencia tmp( nombre, tipo_objeto, lugar, huellas, procesado);
					ev.push_back(tmp);
				}else{
					cout << "No tiene permiso para agregar =D"<<endl;
				}
				
			}break;
			case 3:{//eliminar
				int op3;
				cout << "Ingrese que desea eliminar " << endl
					 << "1.- Personal" << endl
					 << "2.- Evidencias" << endl
					 << "3.- Casos" << endl;
				cin >> op3;
				switch(op3){
					case 1:{//personal
						cout << "Ingrese que tipo de personal desea eliminar " << endl
						 	<< "1.- Administrativo" << endl
						 	<< "2.- Forense" << endl
						 	<< "3.- Investigador" << endl;
						 	cin >> op3;
						switch(op3){
							case 1:{//adminsa
								for(int i = 0; i < administrativo.size(); i++){
									cout << i << " .- " << administrativo[i].getNombre() << endl;
								}
								cout << "Ingrese número del que despide" << endl;
								int resp;
								cin >> resp;
								administrativo.erase(administrativo.begin()+resp);
							}break;
							case 2:{//forense
								for(int i = 0; i < forense.size(); i++){
									cout << i << " .- " << forense[i].getNombre() << endl;
								}
								cout << "Ingrese número del que despide" << endl;
								int resp;
								cin >> resp;
								forense.erase(forense.begin()+resp);
							}break;
							case 3:{//investigador
								for(int i = 0; i < investigador.size(); i++){
									cout << i << " .- " << investigador[i].getNombre() << endl;
								}
								cout << "Ingrese número del que despide" << endl;
								int resp;
								cin >> resp;
								investigador.erase(investigador.begin()+resp);
							}break;
						}
					}break;
					case 2:{//evidencaas
						for(int i = 0; i < ev.size(); i++){
							cout << i << " .- " << ev[i].getNombre() << endl;
						}
						cout << "Ingrese número del que despide" << endl;
						int resp;
						cin >> resp;
						ev.erase(ev.begin()+resp);
					}break;
					case 3:{//casos
						cout << "Ingrese que tipo de personal desea eliminar " << endl
						 	<< "1.- Homicidio" << endl
						 	<< "2.- Secuestro" << endl;
						 	cin >> op3;
						switch(op3){
							case 1:{//homicidio
								for(int i = 0; i < homicidio.size(); i++){
									cout << i << " .- " << homicidio[i].toString() << endl;
								}
								cout << "Ingrese número del que despide" << endl;
								int resp;
								cin >> resp;
								homicidio.erase(homicidio.begin()+resp);
							}break;
							case 2:{//secuestro
								for(int i = 0; i < secuestros.size(); i++){
									cout << i << " .- " << secuestros[i].toString() << endl;
								}
								cout << "Ingrese número del que despide" << endl;
								int resp;
								cin >> resp;
								secuestros.erase(secuestros.begin()+resp);
							}break;
						}
					}break;
				}

			}break;
			case 4:{//login
				string user,pass;
				cout << "Ingrese el username: ";
				cin >> user;
				cout << "Ingrese el password: ";
				cin >> pass;
				bool real=false;
				if(real == false){
					for(int i = 0;i < administrativo.size();i++){
						if(administrativo[i].getUser() == user && administrativo[i].getPassword() == pass ){
							cout << administrativo[i].toString(secuestros)<<endl;
							real = true;
							break;
						}
					}
				}
				if(real == false){
					cout << "Entro 1"<<endl;
					for(int i = 0;i < forense.size();i++){
						if(forense[i].getUser() == user && forense[i].getPassword() == pass ){
							cout << "Entro 2"<<endl;
							cout <<forense[i].toString(homicidio)<<endl;
							real = true;
							break;
						}
					}
				}
				if(real == false){
					for(int i = 0;i < investigador.size();i++){
						if(investigador[i].getUser() == user && investigador[i].getPassword() == pass ){
							cout <<investigador[i].toString(ev)<<endl;
							real = true;
							break;
						}
					}
				}
				
			}break;
			case 5:{//agregar casos
				cout << "1. Homicidio"<<endl<<
						"2. Secuestro"<< endl;
				cin >> op1;
				switch(op1){
					case 1:{//homicidio
						string culpable, victima, sospechoso_principal,nombre;
						vector <string> sospechosos;
						int sp;
						string num_caso;
						vector<Investigador> lista;
						vector<Objetos_Evidencia> lista2;
						string hora_incidente;
						string fecha_incidente;
						bool abierto,seguir;
						cout << "Número del caso: "<<endl;
						cin >> num_caso;
						lista = investigador;
						lista2 =ev;
						cout << "Hora del incidente: "<<endl;
						cin >> hora_incidente;
						cout << "Fecha del incidente: "<<endl;
						cin >> fecha_incidente;
						cout << "Lista de los sospechosos: "<<endl;
						do{
							cout <<"Nombre del sospechoso: "<<endl;
							cin >> nombre;
							sospechosos.push_back(nombre);
							cout << "Desea seguir? 1- Si/ 0-No"<<endl;
							cin >> seguir;
						}while(seguir);
						cout << "Sospechoso Principal: "<<endl<<endl;
						for(int i = 0;i < sospechosos.size();i++){
							cout << i << ") "<< sospechosos[i]<<endl;
						}
						cout << "Ingrese el número del sospechoso principal: "<<endl;
						cin >> sp;
						sospechoso_principal = sospechosos[sp];
						cout << "¿Está abierto el caso? 0-No/1-Si"<<endl;
						cin >> abierto;
						if(!abierto){
							for(int i = 0;i < sospechosos.size();i++){
								cout << i << ") "<< sospechosos[i]<<endl;
							}
							cout << "Ingrese el número del culpable: "<<endl;
							cin >> sp;
							culpable = sospechosos[sp];
						}else{
							culpable = "";
						}
						cout << "Nombre de la víctima: "<<endl;
						cin >> victima;
						Homicidio hom( num_caso, lista, lista2, hora_incidente, fecha_incidente, abierto, sospechosos,  sospechoso_principal, victima,  culpable);
						homicidio.push_back(hom);
						sospechosos.clear();

					}break;
					case 2:{//secuestro
						string victima;
						string lugar_secuestro;
						bool pide_rescate;
						double cantidad;
						bool estado_victima;
						string num_caso;
						vector<Investigador> lista;
						vector<Objetos_Evidencia> lista2;
						string hora_incidente;
						string fecha_incidente;
						bool abierto;
						cout << "Numero del caso: "<<endl;
						cin >> num_caso;
						lista = investigador;
						lista2 =ev;
						cout << "Hora del incidente: "<<endl;
						cin >> hora_incidente;
						cout << "Fecha del incidente: "<<endl;
						cin >> fecha_incidente;
						cout << "Nombre de la victima: "<<endl;
						cin >> victima;
						cout << "Lugar del secuestro: "<<endl;
						cin >> lugar_secuestro;
						cout << "Pidio rescate? 1-Si/ 0-No"<<endl;
						cin >> pide_rescate;
						if(pide_rescate == true){
							cout << "Cantidad: "<<endl;
							cin >> cantidad;
						}else{
							cantidad = 0;
						}
						cout << "Esta abierto el caso? 0-No/1-Si"<<endl;
						cin >> abierto;
						if(abierto == 0){
							cout << "La victima esta muerto o vivo? 0- Muerto / 1-Vivo"<<endl;
							cin >> estado_victima;
						}else{
							estado_victima=true;
						}
						Secuestro sec(victima,lugar_secuestro,pide_rescate,cantidad,estado_victima,num_caso,lista,lista2,hora_incidente,fecha_incidente,abierto);
						secuestros.push_back(sec);
					}break;
				}
			}
		}
	}while(op != 6);
	return 0;
}