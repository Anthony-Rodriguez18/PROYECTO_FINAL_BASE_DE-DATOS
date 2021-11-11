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
void Menu :: crearUsuarioAux()
{
    cout <<  "Contraseña: "<<endl ; 
  getline(cin,usuario.contraseña);
  cout << endl << "Código: ";
  getline(cin, usuario.codigo);
  cout << endl << "Nombres: "; 
  getline(cin, usuario.nombres); 
  cout << endl << "Apellidos: ";
  getline(cin, usuario.apellidos);
  cout << endl << "DNI: ";
  getline(cin,usuario.dni);
  cout << endl << "Correo institucional: ";
  getline(cin,usuario.correoInsti)  ;
  cout << endl << "Celular: ";
  getline(cin, usuario.celular);
  cout << endl << "Dirección: ";
  getline(cin,usuario.direccion);
  cout << endl << "Estado civil: ";
  getline(cin,usuario.estdCiv);
  cout << endl; 
}
void Menu :: crearAdmin()
{  
  cout <<endl << "Ingrese los siguientes datos: "<< endl;
  crearUsuarioAux();
}

void Menu :: crearProf()
{
  cout <<endl << "Ingrese los siguientes datos: ";
  crearUsuarioAux();
  cout << endl << "Cursos que enseñan: ";
  getline(cin,profesor.cursosEnseña);
  cout << endl << "Sueldo: " ;
  cin >> profesor.sueldo;
  fflush(stdin);
  cout << endl << "perfil profesional: " ;
  getline(cin,profesor.perfilProf);
  fflush(stdin);
  cout << "Suplente (si/no): ";
  getline(cin,profesor.suplente);
  fflush(stdin); 
}

void Menu ::crearAlumno()
{  
  cout <<endl << "Ingrese los siguientes datos: ";
  crearUsuarioAux();
  cout<<"carrera: "<<endl;
  getline(cin, alumno.carrera);
  cout<<"cursos: "<<endl;
  getline(cin,alumno.cursos);
  cout<<"periodo de ingreso: "<<endl;
  getline(cin, alumno.periodoIngreso);
  cout<<"Semestre: "<<endl;
  cin>> alumno.semestre;
  cout<<"creditos del semestre: ";
  cin>> alumno.creditosSemestre;
  cout<<"creditos acumulados: ";
  cin>> alumno.creditosAcumulados;
  cout<<"Notas del alumno: ";
  cin>> alumno.notas;
  cout<<"Mensualidad del alumno: ";
  cin>> alumno.mensualidad;
}

void Menu :: crearUsuario()
{
  ofstream escritura;
  ifstream verificador;
  string auxCodigo;
  bool coincidencia=false;
  verificador.open("usuarios.txt",ios::in);
  escritura.open("usuarios.txt",ios::app);
  if(escritura.is_open()&&verificador.is_open())
  {
        cout<<"\t\t\t\t***Crear Usuario***\t\t\t\t\n\n";
        fflush(stdin);
        cout<<"Ingresa el código del cliente: ";
        getline(cin,auxCodigo);
        if(auxCodigo=="")
            do
            {
                cout<<"código de cliente no álido!, intentalo nuevamente: ";
                getline(cin,auxCodigo);
            }
            while(auxCodigo=="");
        do
        {
            verificador.seekg(0);
            getline(verificador,usuario.codigo);
            while(!verificador.eof())
            {
                getline(verificador,usuario.contraseña);
                getline(verificador,usuario.nombres);
                getline(verificador,usuario.apellidos);
                getline(verificador,usuario.dni);
                getline(verificador,usuario.correoInsti);
                getline(verificador,usuario.celular);
                getline(verificador,usuario.direccion);
                getline(verificador,usuario.estdCiv);

                if(usuario.codigo==auxCodigo)
                {
                    coincidencia=true;
                    cout<<"\n\nYa existe un cliente con ese código!\n\n";
                    cout<<"El cliente con ese código es: "<<usuario.nombres<<"\n\n";
                    cout<<"Ingresa un código válido!: ";
                    getline(cin,auxCodigo);
                    if(auxCodigo=="")
                        do
                        {
                            cout<<"\ncódigo de cliente no válido!, intentalo nuevamente: ";
                            getline(cin,auxCodigo);
                        }
                        while(auxCodigo=="");

                    break;
                }

                //getline(verificador,usuario.codigo);
            }

            if(verificador.eof()&&auxCodigo!=usuario.codigo)
                coincidencia=false;

        }
        while(coincidencia==true);

        cout << "\033[H\033[2J\033[3J";
        char opc;
        cout << endl <<"\t\t\t\t\t*****Crear un Usuario*****\t\t\t\t\t";
        cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
        cin >> opc;
        switch (opc)
        {
        case 'D': 
          {
            crearAdmin();
            escritura<<usuario.codigo<<endl<<usuario.contraseña<<endl<<usuario.nombres<<endl<< usuario.apellidos <<endl << usuario.dni<<endl << usuario.correoInsti<<endl<<usuario.celular<< endl<<usuario.direccion<<endl<<usuario.estdCiv<<endl;
          }
        case 'P': 
          {
            crearProf();
            escritura<<usuario.codigo<<endl<<usuario.contraseña<<endl<<usuario.nombres<<endl<< usuario.apellidos <<endl << usuario.dni<<endl << usuario.correoInsti<<endl<<usuario.celular<< endl<<usuario.direccion<<endl<<usuario.estdCiv<<endl<<profesor.cursosEnseña<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente;
          }
        case 'A': 
          {
            crearAlumno();
            escritura<<usuario.codigo<<endl<<usuario.contraseña<<endl<<usuario.nombres<<endl<< usuario.apellidos <<endl << usuario.dni<<endl << usuario.correoInsti<<endl<<usuario.celular<< endl<<usuario.direccion<<endl<<usuario.estdCiv<<endl<<alumno.carrera<<endl<<alumno.cursos<<endl<<alumno.periodoIngreso<<endl<<alumno.semestre<<endl<<alumno.creditosSemestre<<endl<<alumno.creditosAcumulados<<endl<<alumno.notas<<endl<<alumno.mensualidad;
          }
        }


        cout<<"El registro se ha completado correctamente.\n\n";
        cout<<"\t\t\t\t***Crear Usuario***\t\t\t\t\n\n";
    }

    else
    {
        error();
    }

    escritura.close();
    verificador.close();
}
void Menu :: verUsuarioAux()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("usuarios.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Usuario***\t\t\t\t\n\n";
    cout<<"Ingresa el código del cliente que deseas consultar detalles: ";
    getline(cin,auxCodigo);
    getline(mostrar,usuario.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,usuario.contraseña);
      getline(mostrar,usuario.nombres);
      getline(mostrar,usuario.apellidos);
      getline(mostrar,usuario.dni);
      getline(mostrar,usuario.correoInsti);
      getline(mostrar,usuario.celular);
      getline(mostrar,usuario.direccion);
      getline(mostrar,usuario.estdCiv);

      if(auxCodigo== usuario.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<usuario.codigo<<endl;
          cout<<"Nombres: "<<usuario.nombres<<endl;
          cout<<"Apellidos: "<<usuario.apellidos<<endl;
          cout<<"DNI: "<<usuario.direccion<<endl;
          cout<<"Correo Institucional: "<<usuario.correoInsti<<endl;
          cout<<"DNI: "<<usuario.dni<<endl;
          cout<<"Celular: "<<usuario.celular<<endl;
          cout<<"Direccion: "<<usuario.direccion<<endl;
          cout<<"Estado Civil: "<<usuario.estdCiv<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,usuario.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
    else
    {
      error();
    }

    mostrar.close();
  }

}

void Menu :: verUsuarioP()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("usuarios.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Usuario***\t\t\t\t\n\n";
    cout<<"Ingresa el código del cliente que deseas consultar detalles: ";
    getline(cin,auxCodigo);
    getline(mostrar,usuario.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,profesor.cursosEnseña);
      getline(mostrar,profesor.sueldo);
      getline(mostrar,profesor.perfilProf);
      getline(mostrar,profesor.suplente);
      


      if(auxCodigo== usuario.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<usuario.codigo<<endl;
          cout<<"Cursos que enseña: "<<usuario.nombres<<endl;
          cout<<"Sueldo: "<<usuario.apellidos<<endl;
          cout<<"Perfil Profesional: "<<usuario.direccion<<endl;
          cout<<"Suplente: "<<usuario.correoInsti<<endl;
          cout<<"DNI: "<<usuario.dni<<endl;
          cout<<"Celular: "<<usuario.celular<<endl;
          cout<<"Direccion: "<<usuario.direccion<<endl;
          cout<<"Estado Civil: "<<usuario.estdCiv<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,usuario.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
    else
    {
      error();
    }

    mostrar.close();
  }
}
void Menu :: verUsuarioA()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("usuarios.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Usuario***\t\t\t\t\n\n";
    cout<<"Ingresa el código del cliente que deseas consultar detalles: ";
    getline(cin,auxCodigo);
    getline(mostrar,usuario.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,usuario.contraseña);
      getline(mostrar,usuario.nombres);
      getline(mostrar,usuario.apellidos);
      getline(mostrar,usuario.dni);
      getline(mostrar,usuario.correoInsti);
      getline(mostrar,usuario.celular);
      getline(mostrar,usuario.direccion);
      getline(mostrar,usuario.estdCiv);

      if(auxCodigo== usuario.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<usuario.codigo<<endl;
          cout<<"Nombres: "<<usuario.nombres<<endl;
          cout<<"Apellidos: "<<usuario.apellidos<<endl;
          cout<<"DNI: "<<usuario.direccion<<endl;
          cout<<"Correo Institucional: "<<usuario.correoInsti<<endl;
          cout<<"DNI: "<<usuario.dni<<endl;
          cout<<"Celular: "<<usuario.celular<<endl;
          cout<<"Direccion: "<<usuario.direccion<<endl;
          cout<<"Estado Civil: "<<usuario.estdCiv<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,usuario.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
    else
    {
      error();
    }

    mostrar.close();
  }
}

void Menu :: verUsuarioAd()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("usuarios.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Usuario***\t\t\t\t\n\n";
    cout<<"Ingresa el código del cliente que deseas consultar detalles: ";
    getline(cin,auxCodigo);
    getline(mostrar,usuario.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,usuario.contraseña);
      getline(mostrar,usuario.nombres);
      getline(mostrar,usuario.apellidos);
      getline(mostrar,usuario.dni);
      getline(mostrar,usuario.correoInsti);
      getline(mostrar,usuario.celular);
      getline(mostrar,usuario.direccion);
      getline(mostrar,usuario.estdCiv);

      if(auxCodigo== usuario.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<usuario.codigo<<endl;
          cout<<"Nombres: "<<usuario.nombres<<endl;
          cout<<"Apellidos: "<<usuario.apellidos<<endl;
          cout<<"DNI: "<<usuario.direccion<<endl;
          cout<<"Correo Institucional: "<<usuario.correoInsti<<endl;
          cout<<"DNI: "<<usuario.dni<<endl;
          cout<<"Celular: "<<usuario.celular<<endl;
          cout<<"Direccion: "<<usuario.direccion<<endl;
          cout<<"Estado Civil: "<<usuario.estdCiv<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,usuario.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
    else
    {
      error();
    }

    mostrar.close();
  }
}

void Menu :: verUsuario()
{

}
void Menu :: menuAdmin()
{
  int op;
  do
  {
    cout << "\t\t***ADMINISTRADOR***\t\t"<<endl;
    cout << "[1] Crear Usuario" << endl;
    cout << "[2] Modificar Usuario" << endl;
    cout << "[3] Mostrar Datos de Usuario" << endl;
    cout << "[4] Eliminar Usuario" << endl;
    cout << "[5] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> op;
    std::cout << "\033[H\033[2J\033[3J";
    switch (op)
		{
		case 1:
		{
      crearUsuario();
      break;
		}
		case 2:
		{
			verUsuario();
			break;
		}
		case 3:
		{
			//mostrarUsuarioComp();
			break;
		}
		case 4:
		{
      //eliminarUsuario();
			break;
		}
    case 5:
    {
      break;
    }
		default:
		{
			cout << "Opción no válida" << endl;
			break;
		}
    }
  }
  while(op != 5 );
}

void Menu :: menuProf()
{
  int opc;
  do
  {
    cout << "\t\t***PROFESOR***\t\t"<<endl;
    cout << "[1] Modificar datos personales" << endl;
    cout << "[2] Modificar notas" << endl;
    cout << "[3] Mostrar Usuario" << endl;
    cout << "[4] Mostrar datos Propios" << endl;
    cout << "[5] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    switch (opc)
		{
      case 1:
      {
        //modificarDatosPer();
        break;
      }
      case 2:
      {
        //modificarNotas();
        break;
      }
      case 3:
      {
        //mostrarUsuario();
        break;
      }
      case 4:
      {
       //mostrarProfesor();
      }
      case 5:
      {
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;

        break;
      }
    }
  }
  while(opc != 5 );
}
void Menu :: menuAlumno()
{
  int opc;
  do
  {
    cout << "\t\t***ALUMNO***\t\t"<<endl;
    cout << "[1] Modificar datos personales" << endl;
    cout << "[2] Mostrar Datos" << endl;
    cout << "[3] Mostrar Usuario" << endl;
    cout << "[4] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    switch (opc)
		{
      case 1:
      {
        //modificarDatosPer();
        break;
      }
      case 2:
      {
        //mostrarAlumno();
        break;
      }
      case 3:
      {
        //mostrarUsuario();
        break;
      }
      case 4:
      {
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;

        break;
      }
    }
  }
  while(opc != 4 );
}

void Menu :: menuPrincipal()
{
  int opc;
  do
  {
    cout << "\t\t***Universidad las chicas superpoderosas***\t\t"<<endl;
    cout << "[1] Administrador" << endl;
    cout << "[2] Profesor" << endl;
    cout << "[3] Alumno" << endl;
    cout << "[4] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    switch  (opc)
		{
      case 1:
      {
        menuAdmin();
        break;
      }
      case 2:
      {
        menuProf();
        break;
      }
      case 3:
      {
        menuAlumno();
        break;
      }
      case 4:
      {
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;
        break;
      }
    }
  }
  while(opc != 4 );
}
