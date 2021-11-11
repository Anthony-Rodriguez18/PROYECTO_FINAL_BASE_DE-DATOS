//Realizado en Replit
/*Grupo: Las chicas super poderosas        CIENCIA DE LA COMPUTACIÓN I  CCOMP2-1
INTEGRANTES: 
- Josue Carpio 
- Ariana Leon 
- Anthony Rodriguez */


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

void error()
{
  cout<<"No se pudo abrir el archivo de registros, asegurese que el archivo se encuentre en\n";
  cout<<"la misma ubicación que el programa o que el archivo de texto se llame: \n";
  cout<<"usuarios.txt, si el archivo tiene otro nombre renómbrelo al ya mencionado\n\n";
}
class Usuario 
{
  public:
  string contraseña;
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

Usuario :: Usuario()
{
  contraseña = " ";
  codigo = " ";
  nombres = " "; 
  apellidos = " ";
  dni = " ";
  correoInsti = " " ;
  celular = " ";
  direccion = " ";
  estdCiv = " ";

}

class Admin :  Usuario
{
  public:
  Admin(); 

};

Admin :: Admin()
{
  Usuario(); 
}

class Profesor : Usuario
{
  public: 
  string	cursosEnseña;
	string	sueldo;
	string	perfilProf;
	string	suplente;
  Profesor();

};
Profesor :: Profesor()
{
  cursosEnseña = " ";
  sueldo = " ";
  perfilProf = " ";
  suplente = " ";
}
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
Alumno :: Alumno()
{
  carrera = " ";
  cursos = " ";
  periodoIngreso = " ";
  semestre = 0;
  creditosSemestre = 0;
  creditosAcumulados = 0;
  notas = 0;
  mensualidad = 0;
} 

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

Menu :: Menu()
{
  Usuario();
  Profesor();
  Alumno();
}
