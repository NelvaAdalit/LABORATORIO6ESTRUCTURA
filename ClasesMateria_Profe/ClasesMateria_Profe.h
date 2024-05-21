#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ClasesMateriaProfe {
	public ref class Materia
	{
	public:
		property String^ codigo;
		property String^ nombre;


		Materia();
		Materia(String^ _codigo, String^ _nombre);
		~Materia();
	};


	public ref class profesor {
	private:
		property String^ identificador;
		property String^ nombre;
		property String^ apellido;
		property int edad;
		property String^ sexo;
		property int celular;
		property String^ direccion;
		property String^ fecha_ingreso;
		property String^ categoria;
		property float salario;
		property String^ titulo_universitario;

	public:

		// Métodos constructores y destructores
		List<Materia^>^ Materias;
		profesor();
		profesor(String^ _identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario);

		~profesor();

		// Métodos accesores get y set
		String^ getidentificador() { return identificador; }
		String^ getnombre() { return nombre; }
		String^ getapellido() { return apellido; }
		int getedad() { return edad; }
		String^ getsexo() { return sexo; }
		int getcelular() { return celular; }
		String^ getdireccion() { return direccion; }
		String^ getfechaingreso() { return fecha_ingreso; }
		String^ getcategoria() { return categoria; }
		float getsalario() { return salario; }
		String^ gettitulo_universitario() { return titulo_universitario; }


		void setidentificador(String^ _identificador) { identificador = _identificador; }
		void setnombre(String^ _nombre) { nombre = _nombre; }
		void setapellido(String^ _apellido) { apellido = _apellido; }
		void setedad(int _edad) { edad = _edad; }
		void setsexo(String^ _sexo) { sexo = _sexo; }
		void setcelular(int _celular) { celular = _celular; }
		void setdireccion(String^ _direccion) { direccion = _direccion; }
		void setfechaingreso(String^ _fecha_ingreso) { fecha_ingreso = _fecha_ingreso; }
		void setcategoria(String^ _categoria) { categoria = _categoria; }
		void setsalario(float _salario) { salario = _salario; }
		void settitulo_universitario(String^ _titulo_universitario) { titulo_universitario = _titulo_universitario; }


	};
	public ref class Lista_Profesores {


	public:
		List<profesor^>^ LProfesores;
		Lista_Profesores();
		~Lista_Profesores();
		void insertar_profesor(String^ _identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario);
		void mostrar_profesores();
		profesor^ Profesor_primer();
		profesor^ Profesor_ultimo();
		profesor^ Profesor_anterior(String^ _id_profesor);
		profesor^ Profesor_siguiente(String^ _id_profesor);
		bool eliminar_profesor(String^ _id_identificador);
		bool actualizar_profesor(String^ _id_identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario);



	};


}
