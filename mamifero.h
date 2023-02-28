#ifndef MAMIFERO_H
#define MAMIFERO_H
#include <iostream>

using namespace std;

class Mamifero
{
    private:
        int nacimiento;
        string lugar_nacimiento;
    public:
        Mamifero(int n, string ln): nacimiento(n), lugar_nacimiento(ln){}
        Mamifero():nacimiento(0), lugar_nacimiento(""){}

        int getnacimiento();
        void setnacimiento(int nacimiento);
        string getlugardenacimiento();
        void setlugardenacimiento(string lugar_nacimiento);
};

class Felino : public Mamifero
{
private:
    string dieta;
    string raza;
    string circo;
public:
    Felino(int n, string ln, string d,string r, string c): Mamifero(n, ln), dieta(d), raza(r), circo(c){}
    Felino(): Mamifero(), dieta(""), raza(""), circo(""){}

    string getdieta();
    void setdieta(string dieta);
    string getraza();
    void setraza(string raza);
    string getcirco();
    void setcirco(string circo);
};

class GatoDomestico : public Felino
{
private:
    string dueno;
public:
    GatoDomestico(int n, string ln, string d, string r, string c, string due): Felino(n, ln, d, r, c), dueno(due){}
    GatoDomestico(): Felino(), dueno(""){}

    void setdueno(string dueno);
    string getdueno();
    void mostrar();
    void obtener();

    bool operator == ( GatoDomestico &a)
    {
        if (getnacimiento() == a.getnacimiento() && getlugardenacimiento() == a.getlugardenacimiento() && getdieta() == a.getdieta() && getraza() == a.getraza() && getcirco() == a.getcirco() && dueno == a.dueno)
        {
            return true;
        }
        return false;
    }

    friend ostream& operator <<(ostream& os, GatoDomestico gato){
    cout<<endl<<"Anio de nacimiento: ";
    os<<gato.getnacimiento()<<endl;
    cout<<"Lugar de nacimiento: ";
    os<<gato.getlugardenacimiento()<<endl;
    cout<<"Dieta: ";
    os<<gato.getdieta()<<endl;
    cout<<"Raza: ";
    os<<gato.getraza()<<endl;
    cout<<"Circo: ";
    os<<gato.getcirco()<<endl;
    cout<<"Dueno: ";
    os<<gato.dueno<<endl;
}


    friend istream& operator >>(istream& os, GatoDomestico gato){
    int aux;
    string auxdes;
    cout<<endl<<"Ano de nacimiento: ";
    cin>>aux;
    gato.setnacimiento(aux);
    cout<<"Lugar de nacimiento: ";
    cin>>auxdes;
    gato.setlugardenacimiento(auxdes);
    cout<<"Dieta: ";
    cin>>auxdes;
    gato.setdieta(auxdes);
    cout<<"Raza: ";
    cin>>auxdes;
    gato.setraza(auxdes);
    cout<<"Circo: ";
    cin>>auxdes;
    gato.setcirco(auxdes);
    cout<<"Nombre del dueno";
    os>>gato.dueno;
}
};
#endif // MAMIFERO_H
