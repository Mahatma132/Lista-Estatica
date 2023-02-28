#include <iostream>
#include "Lista.h"

using namespace std;

int main(){
    Lista lis;
    GatoDomestico info;
    int aux,pos;

    do{
    cout<<"\n1.Agrega\n2.Buscar\n3.Eliminar\n4.Insertar\n5.Mostrar\n6.Salir\nSelecciona una opcion: "<<endl;
    cin>>aux;

        switch (aux)
        {
        case 1:
            cout<<"Ingrese los datos del elemento gato domestico: ";
            info.obtener();
            lis.agrega(info);
        break;
        case 2:
            cout<<"Ingresa los datos del elemento gato domestico";
            cin>>info;
            cout<<"Su dato esta en la posicion: "<<lis.buscar(info);
        break;
        case 3:
            cout<<"Ingresa la posicion a eliminar";
            cin>>pos;
            lis.elimina(pos);
        break;
        case 4:
            cout<<"Ingresa los datos del elemento gato domestico";
            cin>>info;
            cout<<"Ingresa la posicion";
            cin>>pos;
            lis.inserta(info, pos);
        break;
        case 5:
            lis.imprime();
        break;
        }
    } while (aux!=6);

    return 0;
}
