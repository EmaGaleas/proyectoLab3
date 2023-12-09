#ifndef EDUCACIONCONTINUA_H
#define EDUCACIONCONTINUA_H
#include <iostream>
#include "solicitante.h"

class EducacionContinua : public Solicitante
{
public:
    EducacionContinua();
    EducacionContinua(string nombre, string numerodecuenta, string correo);
    ~EducacionContinua();
};

#endif // EDUCACIONCONTINUA_H
