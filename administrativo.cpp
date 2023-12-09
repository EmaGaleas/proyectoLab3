#include "administrativo.h"

Administrativo::Administrativo()
    : Solicitante("","","")
{

}

Administrativo::Administrativo(string nombre, string numerodecuenta, string correo)
    :Solicitante(nombre,numerodecuenta,correo)
{

}

Administrativo::~Administrativo()
{

}

void Administrativo::Imprimir() const
{
    std::cout<<"Soy administrativo";
}
