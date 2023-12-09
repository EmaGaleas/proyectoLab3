#include "alumno.h"

Alumno::Alumno(string nombre, string numerodecuenta, string correo)
    :Solicitante(nombre,numerodecuenta,correo)
{

}

Alumno::~Alumno()
{}

void Alumno::Imprimir() const
{
    std::cout<<"soy alumno";
}
