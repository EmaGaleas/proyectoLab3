#include "docente.h"

Docente::Docente()
    :Solicitante("","","")
{

}

Docente::Docente(string nombre, string numerodecuenta, string correo)
    :Solicitante(nombre,numerodecuenta,correo)
{

}

Docente::~Docente()
{}

void Docente::Imprimir() const
{
    std::cout<<"Soy docente";
}
