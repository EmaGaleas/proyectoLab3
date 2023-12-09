#ifndef CFRAME_H
#define CFRAME_H
#include <iostream>
#include "lista.h"
#include <QMainWindow>
using std::string;

QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT
private:

    //ATRIBUTOS PARA LA HERENCIA
    string nombre,numerodecuenta,correo; //SOLICITANTES
    string nombrelab,clase,motivo,frecuencia,equipo,fecha,horainicio,horafinal; //LABORATORIO
    int cantidadintegrantes;

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();


private:
    Ui::cframe *ui;
};
#endif // CFRAME_H
