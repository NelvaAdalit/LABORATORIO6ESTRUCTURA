#include "pch.h"

#include "ClasesMateria_Profe.h"


ClasesMateriaProfe::profesor::profesor() {
	identificador = "";
	nombre = "";
	apellido = "";
	edad = 0;
	sexo = "masculino";
	celular = 0;
	direccion = "";
	fecha_ingreso = "";
	categoria = "fisica";
	salario = 0;
	titulo_universitario = "ingeneria de sistemas";
	Materias = gcnew List<Materia^>();
}
ClasesMateriaProfe::profesor::profesor(String^ _identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario) {
	identificador = _identificador;
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	sexo = _sexo;
	celular = _celular;
	direccion = _direccion;
	fecha_ingreso = _fecha_ingreso;
	categoria = _categoria;
	salario = _salario;
	titulo_universitario = _titulo_universitario;
	Materias = gcnew List<Materia^>();
}
ClasesMateriaProfe::profesor::~profesor() {

}
ClasesMateriaProfe::Materia::Materia() {
	codigo = "";
	nombre = "";
}
ClasesMateriaProfe::Materia::Materia(String^ _codigo, String^ _nombre) {
	codigo = _codigo;
	nombre = _nombre;
}
ClasesMateriaProfe::Materia::~Materia() {
	throw gcnew System::NotImplementedException();
}
//metodos de la clase lista de profesores
ClasesMateriaProfe::Lista_Profesores::Lista_Profesores() {
	LProfesores = gcnew List<profesor^>();
}
ClasesMateriaProfe::Lista_Profesores::~Lista_Profesores() {

}
void ClasesMateriaProfe::Lista_Profesores::insertar_profesor(String^ _identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario) {
	profesor^ nuevoProfesor = gcnew profesor(_identificador, _nombre, _apellido, _edad, _sexo, _celular, _direccion, _fecha_ingreso, _categoria, _salario, _titulo_universitario);
	LProfesores->Add(nuevoProfesor);
}
void ClasesMateriaProfe::Lista_Profesores::mostrar_profesores() {
	for each (profesor ^ profesor in LProfesores) {
	
		for each (Materia ^ materia in profesor->Materias) {
			Console::WriteLine("Codigo: {0}, nombre: {0} ", materia->codigo, materia->nombre);

		}
		Console::WriteLine("");
	}
}
ClasesMateriaProfe::profesor^ ClasesMateriaProfe::Lista_Profesores::Profesor_primer() {
	profesor^ p;
	p = LProfesores[0];
	return p;
}
ClasesMateriaProfe::profesor^ ClasesMateriaProfe::Lista_Profesores::Profesor_ultimo() {
	profesor^ p;
	p = LProfesores[LProfesores->Count - 1];
	return p;
}
ClasesMateriaProfe::profesor^ ClasesMateriaProfe::Lista_Profesores::Profesor_anterior(String^ _id_profesor) {
	profesor^ profesor_especifico = nullptr;
	for each (profesor ^ prof in LProfesores) {
		if (prof->getidentificador() == _id_profesor) {
			profesor_especifico = prof;
			break;
		}
	}

	profesor^ profesorAnterior = nullptr;
	if (profesor_especifico != nullptr && LProfesores->IndexOf(profesor_especifico) != 0) {
		int index = LProfesores->IndexOf(profesor_especifico);
		// Obtener la brigada que antecede a la brigada específica
		profesorAnterior = LProfesores[index - 1];
	}
	return profesorAnterior;
}
ClasesMateriaProfe::profesor^ ClasesMateriaProfe::Lista_Profesores::Profesor_siguiente(String^ _id_profesor) {
	profesor^ profesor_especifico = nullptr;
	for each (profesor ^ prof in LProfesores) {
		if (prof->getidentificador() == _id_profesor) {
			profesor_especifico = prof;
			break;
		}
	}
	profesor^ profesorSiguiente = nullptr;
	if (profesor_especifico != nullptr && LProfesores->IndexOf(profesor_especifico) != LProfesores->Count - 1) {
		int index = LProfesores->IndexOf(profesor_especifico);
		// Obtener la brigada que antecede a la brigada específica
		profesorSiguiente = LProfesores[index + 1];
	}
	return profesorSiguiente;
}

bool ClasesMateriaProfe::Lista_Profesores::eliminar_profesor(String^ _id_identificador) {
	profesor^ profesor_especifico = nullptr;
	for each (profesor ^ prof in LProfesores) {
		if (prof->getidentificador() == _id_identificador) {
			profesor_especifico = prof;
			break;
		}
	}
	if (profesor_especifico != nullptr) {
		LProfesores->Remove(profesor_especifico);
		return true;
	}
	else
	{
		return false;
	}
}
bool ClasesMateriaProfe::Lista_Profesores::actualizar_profesor(String^ _id_identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario) {
	profesor^ profesor_especifico = nullptr;
	for each (profesor ^ prof in LProfesores) {
		if (prof->getidentificador() == _id_identificador) {
			profesor_especifico = prof;
			break;
		}
	}
	if (profesor_especifico != nullptr) {
		profesor_especifico->setnombre(_nombre);
		profesor_especifico->setapellido(_apellido);
		profesor_especifico->setedad(_edad);
		profesor_especifico->setsexo(_sexo);
		profesor_especifico->setcelular(_celular);
		profesor_especifico->setdireccion(_direccion);
		profesor_especifico->setfechaingreso(_fecha_ingreso);
		profesor_especifico->setcategoria(_categoria);
		profesor_especifico->setsalario(_salario);
		profesor_especifico->settitulo_universitario(_titulo_universitario);
		return true;
	}
	else
	{
		return false;
	}
}