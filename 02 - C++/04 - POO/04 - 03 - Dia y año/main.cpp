#include <iostream>
#include <stdlib.h>

using namespace std;

class DiaAno{
    // Atributos
    private:
        int dia, mes;

    // Metodos
    public:
        DiaAno(int _dia, int _mes){                 // Constructor
            dia = _dia;
            mes = _mes;
        }

        bool igual(DiaAno& d);
        void visualizar();
};

// Comprobamos igualdad en las fechas.

bool DiaAno::igual(DiaAno& d){
    if(dia == d.dia && mes == d.mes){
        return true;
    }else{
        return false;
    }
}

void DiaAno::visualizar(){
    cout << "Monstrando los datos: " << endl;
    cout << "Mes: " << mes << "\nDia:" << dia << endl;
}

int main(){

    // Creamos objetos.
    DiaAno* hoy;
    DiaAno* cumple;

    int d, m;

    // Ingresamos datos.
    cout << "De la fecha de hoy, dia: ";
    cin >> d;
    cout << "De la fecha de hoy, mes: ";
    cin >> m;

    hoy = new DiaAno(d, m);

    cout << "\nDe la fecha de su cumpleanos, dia: ";
    cin >> d;
    cout << "De la fecha de su cumpleanos, mes: ";
    cin >> m;

    cumple = new DiaAno(d, m);

    system("cls");

    // Mostraños fechas.
    hoy -> visualizar();
    cout << endl;
    cumple -> visualizar();

    system("pause");
    system("cls");

    // Comprobacion de fecha y cum.
    if(hoy->igual(*cumple)) cout << "Feliz CUM!!!" << endl;
    else cout << "Feliz no CUM!!!" << endl;

    system("pause");
    return 0;
}
