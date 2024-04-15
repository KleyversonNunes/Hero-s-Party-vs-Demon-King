#include <iostream>
using std::cout;

//#include "Individual.h"
#include "Individual.cpp"
#include "Weapon.cpp"

int main()
{
    // Criando um objeto const a partir do constructor vazio
    const Individual elfMage;
    elfMage.print();

    // Criando um objeto a partir do segundo constructor
    Individual healer("Kley","Elfo",50,30,600);
    healer.print();

    // Criando um objeto a partir do constructor de cópia
    Individual otherHealer(healer);
    otherHealer.print();

    cout << "Nome antigo: " << otherHealer.getName() << "\n";
    otherHealer.setName("Kleyversonnnnnn");
    cout << "Novo nome: " << otherHealer.getName() << "\n\n";

    cout << "Raca antiga: " << otherHealer.getBreed() << "\n";
    otherHealer.setBreed("Humano");
    cout << "Nova raca: " << otherHealer.getBreed() << "\n\n";

    cout << "Forca antiga: " << otherHealer.getStrength() << "\n";
    otherHealer.setStrength(50);
    cout << "Nova forca: " << otherHealer.getStrength() << "\n\n";

    cout << "HP antigo: " << otherHealer.getHp() << "\n";
    otherHealer.setHp(100);
    cout << "Novo HP: " << otherHealer.getHp() << "\n\n";

    otherHealer.restoreHp(80);
    cout << "O HP aumentou para " << otherHealer.getHp() << "\n\n";

    cout << "Saldo atual: " << otherHealer.getMoney() << "\n\n";
    double saldo = otherHealer.buyItem(500);
    otherHealer.setMoney(saldo);

    otherHealer.print();
    
    // Uso da Classe Weapon
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


    return 0;
}
