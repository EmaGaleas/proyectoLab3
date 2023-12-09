#include "solicitante.h"

string Solicitante::getNombre() const
{
    return nombre;
}

void Solicitante::setNombre(const string &newNombre)
{
    nombre = newNombre;
}

string Solicitante::getNumerodecuenta() const
{
    return numerodecuenta;
}

void Solicitante::setNumerodecuenta(const string &newNumerodecuenta)
{
    numerodecuenta = newNumerodecuenta;
}

string Solicitante::getCorreo() const
{
    return correo;
}

void Solicitante::setCorreo(const string &newCorreo)
{
    correo = newCorreo;
}

Solicitante::Solicitante()
{
    this->nombre = "";
    this->numerodecuenta = "";
    this->correo = "";
}

Solicitante::Solicitante(string nombre, string numerodecuenta, string correo)
{
    this->nombre = nombre;
    this->numerodecuenta = numerodecuenta;
    this->correo = correo;
}

Solicitante::~Solicitante()
{

}


