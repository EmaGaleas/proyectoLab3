#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

template<typename tipo>
class lista{
    friend class cframe;
private:
    nodo<tipo> *raizPtr;
    nodo< tipo > *NuevoNodo( const tipo & );
    int Cant=0;

public:
    lista();
    ~lista();

    void InsertarAlInicio(const tipo &);
    void InsertarAlFinal(const tipo &);
    bool EliminarDelInicio(tipo &);
    bool EliminarDelFinal(tipo&);
    bool Vacia();

    void insert_3rd_element(const tipo &);
    void borrarAntePenultimo();


    int Cantidad()const;

};

template<typename tipo>
nodo<tipo> *lista<tipo>::NuevoNodo(const tipo &dato)
{
    return new nodo<tipo>(dato);
}


template<typename tipo>
lista<tipo>::lista() : raizPtr(0), Cant(0){}

template<typename tipo>
lista<tipo>::~lista()
{
    if ( !Vacia() ){
        std::cout << "Destruyendo nodos ...\n";
        nodo< tipo > *actPtr = raizPtr;
        nodo< tipo > *tempPtr;

        for ( ; actPtr != 0; ){
            tempPtr = actPtr;
            std::cout << tempPtr->getDato()<< "\n";
            actPtr = actPtr->SigPtr;
            delete tempPtr;
        }
    }

    std::cout << "Se destruyeron todos los nodos\n\n";
}

template<typename tipo>
void lista<tipo>::InsertarAlInicio(const tipo &dato)
{
    nodo< tipo > *nuevoPtr = NuevoNodo( dato ); // nuevo nodo

    if ( Vacia() ){ // la Lista está vacía
        raizPtr = nuevoPtr; // la nueva lista sólo tiene un nodo
    }else{
        nuevoPtr->SigPtr = raizPtr; // apunta el nuevo nodo al nodo que antes era el primero
        raizPtr = nuevoPtr; // orienta primeroPtr hacia el nuevo nodo
    }
    Cant++;
}

template<typename tipo>
void lista<tipo>::InsertarAlFinal(const tipo &dato)
{
    nodo< tipo > *nuevoPtr = NuevoNodo( dato ); // nuevo nodo
    nodo< tipo > *actPtr = raizPtr;
    if ( Vacia() ){ // la Lista está vacía
        raizPtr = nuevoPtr; // la nueva lista sólo tiene un nodo
    }else{
        for( ; actPtr->SigPtr != 0; actPtr = actPtr->SigPtr);

        actPtr->SigPtr = nuevoPtr;
    }
    Cant++;
}

template<typename tipo>
bool lista<tipo>::EliminarDelInicio(tipo &dato)
{
    if ( Vacia() ){ // la Lista está vacía
        return false; // la eliminación no tuvo éxito
    }else{
        nodo< tipo > *tempPtr = raizPtr; // contiene tempPtr a eliminar
        raizPtr = raizPtr->SigPtr; // apunta al nodo que antes era el segundo
        dato = tempPtr->dato; // devuelve los datos que se van a eliminar
        delete tempPtr; // reclama el nodo que antes era el primero
        Cant--;
        return true;
    }
}

template<typename tipo>
bool lista<tipo>::EliminarDelFinal(tipo &dato)
{
    if ( Vacia() ){ // la Lista está vacía
        return false; // la eliminación no tuvo éxito
    }else{
        nodo< tipo > *tempPtr = raizPtr; // contiene tempPtr a eliminar
        if ( raizPtr->SigPtr == 0 ){ // la Lista tiene un elemento
            raizPtr = 0; // no hay nodos después de la eliminación
        }else{
            nodo< tipo > *actPtr = raizPtr;

            for ( ;actPtr->SigPtr->SigPtr != 0; actPtr = actPtr->SigPtr );

            tempPtr = actPtr->SigPtr;
            actPtr->SigPtr = 0; // ahora éste es el último nodo
        } // fin de else

        dato = tempPtr->dato; // devuelve el valor del nodo que antes era el último
        delete tempPtr; // reclama el nodo que antes era el último
        Cant--;
        return true;
    }
}

template<typename tipo>
bool lista<tipo>::Vacia()
{
    return raizPtr==0;
}

template<typename tipo>
void lista<tipo>::insert_3rd_element(const tipo &dato)
{
    nodo< tipo > *nuevoPtr = NuevoNodo( dato );

    if(this->raizPtr != nullptr && this->raizPtr.SigPtr!= nullptr){
        if(this->raizPtr->SigPtr->SigPtr == nullptr){
        this->raizPtr->SigPtr->SigPtr = nuevoPtr;
        }else{
            nodo< tipo > *tempPtr  = this->raizPtr->SigPtr->SigPtr;
            nuevoPtr->SigPtr=tempPtr;
            this->raizPtr->SigPtr->SigPtr=nuevoPtr;
        }
    }
    Cant++;
}

template<typename tipo>
void lista<tipo>::borrarAntePenultimo()
{
    if (Vacia() || raizPtr->SigPtr == nullptr || raizPtr->SigPtr->SigPtr == nullptr
            || raizPtr->SigPtr->SigPtr->SigPtr == nullptr) {

        return;
    }

    nodo<tipo> *tempPtr = raizPtr;
    while (tempPtr->SigPtr->SigPtr->SigPtr->SigPtr != nullptr) {
        tempPtr = tempPtr->SigPtr;
    }

    nodo<tipo> *borrarPtr = tempPtr->SigPtr->SigPtr;
    tempPtr->SigPtr->SigPtr = tempPtr->SigPtr->SigPtr->SigPtr;
    delete borrarPtr;
}

template<typename tipo>
int lista<tipo>::Cantidad() const
{
    return Cant;
}

#endif // LISTA_H
