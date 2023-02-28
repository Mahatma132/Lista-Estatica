#include "Mamifero.h"

int Mamifero::getnacimiento()
        {
            return nacimiento;
        }

void Mamifero::setnacimiento(int nacimiento)
{
    this->nacimiento = nacimiento;
}

string Mamifero::getlugardenacimiento()
{
    return lugar_nacimiento;
}

void Mamifero::setlugardenacimiento(string lugar_nacimiento)
{
    this->lugar_nacimiento = lugar_nacimiento;
}

string Felino::getdieta()
{
    return dieta;
}

void Felino::setdieta(string dieta)
{
    this->dieta = dieta;
}

string Felino::getraza()
{
    return raza;
}

void Felino::setraza(string raza)
{
     this->raza = raza;
}

string Felino::getcirco()
{
    return circo;
}

void Felino::setcirco(string circo)
{
     this->circo = circo;
}

string GatoDomestico::getdueno()
{
    return dueno;
}

void GatoDomestico::setdueno(string dueno)
{
    this->dueno = dueno;
}

void GatoDomestico::mostrar(){
    cout<<"\nAnio de nacimiento: ";
    cout<<getnacimiento()<<endl;
    cout<<"Lugar de nacimiento: ";
    cout<<getlugardenacimiento()<<endl;
    cout<<"Dieta: ";
    cout<<getdieta()<<endl;
    cout<<"Raza: ";
    cout<<getraza()<<endl;
    cout<<"Circo: ";
    cout<<getcirco()<<endl;
    cout<<"Dueno: ";
    cout<<dueno<<endl;
    }

void GatoDomestico::obtener(){

int aux;
string aux2;

    cout<<endl<<"Ano de nacimiento: ";
    cin>>aux;
    setnacimiento(aux);
    cout<<"Lugar de nacimiento: ";
    fflush(stdin);
    getline(cin, aux2);
    setlugardenacimiento(aux2);
    cout<<"Dieta: ";
    fflush(stdin);
    getline(cin, aux2);
    setdieta(aux2);
    cout<<"Raza: ";
    fflush(stdin);
    getline(cin, aux2);
    setraza(aux2);
    cout<<"Circo: ";
    fflush(stdin);
    getline(cin, aux2);
    setcirco(aux2);
    cout<<"Nombre del dueno: ";
    fflush(stdin);
    getline(cin, aux2);
    setdueno(aux2);
}
