#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>
#include "solicitante.h"

class Administrativo : public Solicitante
{
public:
    Administrativo();
    Administrativo (string nombre, string numerodecuenta, string correo);
    ~Administrativo();

    void Imprimir() const;
};

#endif // ADMINISTRATIVO_H
