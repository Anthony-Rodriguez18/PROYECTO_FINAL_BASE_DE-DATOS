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
  //void crearUsuarioAux();

  /*//menu admin, menu prof,  menu alumno
  void menuPrincipal();
  //Crear usuario, modificar usuario, mostrar datos, eliminar usuario
  void menuAdmin();  
  //modificar datos personales, modificar notas, ver usuario mostrar datos personales,
  void menuProfesor();
  //Modificar datos personales, mostrar datos personales, ver usuario 
  void menuAlumno();*/

  //Admin
  
  //void crearProfesor();
  //void crearAlumno();
  //void crearAdmin();  
  //void modificarUsuario();
  //void mostrarUsuarioComp(); 
  //void eliminarUsuario();
  
  //Profesor 
  //void modificarNotas();  
  //void mostrarProfesor();

  //Alumno 
  //void mostrarAlumno();  

  //Alumno y prof
  
  //void modificarDatosPer();
  //void mostrarUsuario();

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
