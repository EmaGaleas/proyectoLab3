#include "laboratorio.h"

string Laboratorio::getNombrelab() const
{
    return nombrelab;
}

void Laboratorio::setNombrelab(const string &newNombrelab)
{
    nombrelab = newNombrelab;
}

string Laboratorio::getClase() const
{
    return clase;
}

void Laboratorio::setClase(const string &newClase)
{
    clase = newClase;
}

string Laboratorio::getMotivo() const
{
    return motivo;
}

void Laboratorio::setMotivo(const string &newMotivo)
{
    motivo = newMotivo;
}

string Laboratorio::getFrecuencia() const
{
    return frecuencia;
}

void Laboratorio::setFrecuencia(const string &newFrecuencia)
{
    frecuencia = newFrecuencia;
}

int Laboratorio::getCantidadintegrantes() const
{
    return cantidadintegrantes;
}

void Laboratorio::setCantidadintegrantes(int newCantidadintegrantes)
{
    cantidadintegrantes = newCantidadintegrantes;
}

Laboratorio::Laboratorio()
{
    this->nombrelab = "";
    this->clase = "";
    this->motivo = "";
    this->frecuencia = "";
    this->equipo = "";
    this->fecha = "";
    this->horainicio = "";
    this->horafinal = "";
    this->cantidadintegrantes = NULL;
}

Laboratorio::Laboratorio(string nombrelab, string clase, string motivo, string frecuencia, string equipo, string fecha, string horainicio, string horafinal, int cantidadintegrantes)
{
    this->nombrelab = nombrelab;
    this->clase = clase;
    this->motivo = motivo;
    this->frecuencia = frecuencia;
    this->equipo = equipo;
    this->fecha = fecha;
    this->horainicio = horainicio;
    this->horafinal = horafinal;
    this->cantidadintegrantes = cantidadintegrantes;
}

Laboratorio::~Laboratorio()
{}
