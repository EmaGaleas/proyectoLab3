#ifndef SOLICITANTE_H
#define SOLICITANTE_H
#include <iostream>
using std::string;
using std::cout;

class Solicitante
{
private:
    string nombre,numerodecuenta,correo;
public:
    Solicitante();
    Solicitante(string nombre, string numerodecuenta, string correo);
    ~Solicitante();

    virtual void Imprimir() const = 0;

    string getNombre() const;
    void setNombre(const string &newNombre);
    string getNumerodecuenta() const;
    void setNumerodecuenta(const string &newNumerodecuenta);
    string getCorreo() const;
    void setCorreo(const string &newCorreo);
};

#endif // SOLICITANTE_H
