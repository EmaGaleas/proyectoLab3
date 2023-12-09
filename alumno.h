#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include "solicitante.h"

using std::string;

class Alumno : public Solicitante
{
private:
public:
    Alumno();
    Alumno(string nombre, string numerodecuenta, string correo);
    ~Alumno();

    void Imprimir() const;
};

#endif // ALUMNO_H
