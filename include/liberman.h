#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

void error();

class Usuario 
{
  public:
  string contrasena;
	string codigo;
  string nombres;
	string apellidos;
	string dni;
	string correoInsti;
	string celular;
	string direccion;
	string estdCiv;

  Usuario();
};

class Admin :  Usuario
{
  public:
  Admin(); 
};

class Profesor : Usuario
{
  public: 
  string	cursosEnsena;
	string	sueldo;
	string	perfilProf;
	string	suplente;
  Profesor();
  //void crearProf();
  //void menuProf();
  //void modificarNotas();
  //void modificarDatosP();
  //void mostrarDatosP();

  //friend class Admin; 
  //friend class Alumno;
};

class Alumno : Usuario 
{
  public: 
  string carrera;
  string cursos; 
  string periodoIngreso;
  int semestre;
  int creditosSemestre;
  int creditosAcumulados;
  double notas;
  float mensualidad; 

  Alumno();
  void crearAlumno();
  //void menuAlumno();
  //void modificarDatosA();
  //void mostrarDatosA();

  friend class Admin;
  friend class Profesor;
};


class Menu
{
  public:
  Menu();
  class Usuario usuario; 
  class Admin admin; 
  class Profesor profesor; 
  class Alumno alumno; 

  void menuPrincipal();
  void crearAdmin();
  void crearProf();
  void crearAlumno();
  
  //USUARIO
  void crearUsuarioAux(); 
  void verUsuarioAux();

  //ADMIN
  void menuAdmin();
  void crearUsuario();
  void eliminarUsuario();
  void verUsuario();
  void verUsuarioAd();
  void modificarUsuario();

  //PROF
  void menuProf();
  void modificarNotas();
  void modificarDatosP();
  void mostrarDatosP();
  void verUsuarioP();

  //ALUMNO
  void menuAlumno();
  void modificarDatosA();
  void mostrarDatosA();
  void verUsuarioA();
};


