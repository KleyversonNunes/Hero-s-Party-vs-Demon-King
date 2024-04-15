#include <iostream>
using std::cout;

#include "Weapon.h"

// Instanciação de variáveis statics
int Weapon::numRestores = 3;
int Weapon::numWeapons = 0;
const string Weapon::CLASSIFICACOES[ NUMCLASSIFICACAOARMAS ] = {"S","A","B","C","D"};
string Weapon::medidas [ NUMDEMEDIDAS] = {"Comprimento","Largura","Peso"};

// Implementação do primeiro constructor
Weapon::Weapon(double myDurability,double myStrength,string myType,string myRange)
:restorations(0)
{
    durability = myDurability;
    strength = myStrength;
    type = myType;
    range = myRange;

    // Incrementa em um toda vez que o constructor é chamado
    numWeapons++;
}

// Implementação do constructor de cópia
Weapon::Weapon(const Weapon& other)
:restorations(other.restorations)
{
    this->durability = other.durability;
    this->strength = other.strength;
    this->type = other.type;
    this->range = other.range;

    // Incrementa em um toda vez que o constructor é chamado
    numWeapons++;
}

int Weapon::getRestorations() const
{
    return this->restorations;
}

void Weapon::restoreWeapon()
{
    if (this->restorations < numRestores)
    {
        this->restorations++;
        cout << "Arma restaurada\n\n";
        return;
    }
    cout << "Numero maximo de restaucoes atingido.\n\n";
}

// Implementação dos métodos relacionados aoas arrays
void Weapon::exibirClassificacoes() const{
    cout << "As armas podem ser classificadas em:\n";
    for(int i = 0; i < NUMCLASSIFICACAOARMAS; i++)
    {
        cout << CLASSIFICACOES[ i ] << "\n"; 
    }
}

void Weapon::definirValorMedidas()
{
    // Comprimento, largura, peso
    // Exemplo
    double value[] = {79,15,3};
    for(int i = 0; i < NUMDEMEDIDAS; i++)
    {
        valorMedidas[i] = value[i];
    }
}

void Weapon::exibirMedidas() const
{
    cout << "As medidas da arma sao:\n";
    int i = 0;
    while(i < NUMDEMEDIDAS)
    {
        cout << medidas[i] <<": "<< valorMedidas[i] << "\n";
        i++;
    }
}

void Weapon::print()
{
    cout << "Durability: " << durability << "\n";
    cout << "Strength: " << strength << "\n";
    cout << "Type: " << type << "\n";
    cout << "Range: " << range << "\n";
    cout << "Restorations: " << restorations << "\n\n";
}