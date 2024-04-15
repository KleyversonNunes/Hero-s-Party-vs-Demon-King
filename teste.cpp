#include <iostream>
using std::cout;

//#include "Individual.h"
#include "Weapon.cpp"

int main()
{
    Weapon excalibur(100,70,"espada","medio");
    excalibur.print();

    Weapon otherExcalibur(excalibur);
    otherExcalibur.restoreWeapon();
    otherExcalibur.restoreWeapon();
    otherExcalibur.restoreWeapon();
    otherExcalibur.restoreWeapon();
    cout << "Restorations: " << otherExcalibur.getRestorations() << "\n\n";

    otherExcalibur.restoreWeapon();
    cout << "Restorations: " << otherExcalibur.getRestorations();

    cout << "\n\nNumero maximo de restauracoes que podem ser realizadas: " << Weapon::getNumRestores();

    Weapon shinExcalibur(otherExcalibur);

    cout << "\n\nNumero de armas ja criadas: " << Weapon::getNumWeapons();
    cout << "\n\n";

    shinExcalibur.exibirClassificacoes();
    cout << "\n";
    shinExcalibur.definirValorMedidas();
    cout << "\n";
    shinExcalibur.exibirMedidas();
    cout << "\n";
}