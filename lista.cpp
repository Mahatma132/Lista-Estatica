#include "Lista.h"

bool Lista::vacia()const
{
    return ult==-1;
}

bool Lista::llena()const
{
    return ult==TAM-1;
}

void Lista::agrega(GatoDomestico elem)
{
    if (!llena()){
        datos[ult + 1] = elem;
        ult++;
    }
    else{
        cout<<"No se pudo agregar"<<endl;
    }
}

bool Lista::inserta(GatoDomestico elem, int pos)
{
    if(llena() || pos < 0 || pos > ult + 1){
       cout<<"\n No se pudo insertar";
        return false;
    }
    for (int i = ult + 1; i > pos; i--){
        datos[i] = datos[i - 1];
    }
    datos[pos] = elem;
    ult++;
    return true;
}

int Lista::buscar(GatoDomestico elem)
{
    for (int i = 0; i <= ult; i++){
        if (elem == datos[i]){
            return i;
        }
        else{
            cout<<"Dato no encontrado";
        }
    }
    return -1;
}

bool Lista::elimina(int pos)
{
    if(vacia() || pos < 0 || pos > ult){
        cout<<"\n No se pudo eliminar";
        return false;
    }
    for (int i = pos; i < ult; i++){
        datos[i] = datos[i + 1];
    }
    ult--;
    return true;
}

void Lista::imprime()
{
    if(!vacia()){
        for(int i = 0; i <= ult; i++){
            datos[i].mostrar();
        }
    }
}
GatoDomestico Lista::recupera(int pos)const
{
    if(vacia() || pos < 0 || pos > ult - 1){
        cout<<"\n Insuficiencia de datos";
    }
    else{
    return datos[pos];
    }
}

int Lista::primero()const
{
    if(vacia()){
        return -1;
    }
    return 0;
}

int Lista::ultimo()const
{
    if(vacia()){
        return -1;
    }
    return ult;
}
