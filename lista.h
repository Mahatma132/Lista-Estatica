#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Mamifero.h"
#define TAM 50

using namespace std;


class Lista{
private:
    GatoDomestico datos[TAM];
    int ult;
public:
    Lista()
    {
        ult = -1;
    }

    bool vacia()const;
    bool llena()const;
    void agrega(GatoDomestico elem);
    bool inserta(GatoDomestico elem, int pos);
    int buscar(GatoDomestico elem);
    bool elimina(int pos);
    void imprime();
    GatoDomestico recupera(int pos)const;
    int primero()const;
    int ultimo()const;
};

#endif // LISTA_H
