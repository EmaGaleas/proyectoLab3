#ifndef DOCENTE_H
#define DOCENTE_H
#include "solicitante.h"

class Docente : public Solicitante
{
public:
    Docente();
    Docente(string nombre, string numerodecuenta, string correo);
    ~Docente();

    void Imprimir() const;
};

#endif // DOCENTE_H
