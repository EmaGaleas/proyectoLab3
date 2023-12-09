#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
using std::string;

class Laboratorio
{
private:
    string nombrelab,clase,motivo,frecuencia,equipo,fecha,horainicio,horafinal;
    int cantidadintegrantes;
public:
    Laboratorio();
    Laboratorio(string nombrelab, string clase, string motivo, string frecuencia, string equipo, string fecha, string horainicio, string horafinal, int cantidadintegrantes);
    ~Laboratorio();

    string getNombrelab() const;
    void setNombrelab(const string &newNombrelab);
    string getClase() const;
    void setClase(const string &newClase);
    string getMotivo() const;
    void setMotivo(const string &newMotivo);
    string getFrecuencia() const;
    void setFrecuencia(const string &newFrecuencia);
    int getCantidadintegrantes() const;
    void setCantidadintegrantes(int newCantidadintegrantes);
};

#endif // LABORATORIO_H
