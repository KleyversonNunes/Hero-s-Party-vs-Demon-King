#include <iostream>
using std::cout;
//using std::cin;

#include "Individual.h"

// Implementação do constructor vazio
Individual::Individual()
{
  cout << "Inicializando Individaul no constructor vazio.\n";
  name = "Maria"; // Nome padrão
  breed = "Elfo";
  hp = 100;
  strength = 70;
  money = 500;
}

// Implentação do segundo constructor
Individual::Individual(string myName,string myBreed,double myHp,double myStrength,double myMoney)
{
  cout << "Inicializando Individaul no segundo constructor.\n";
  name = myName;
  breed = myBreed;
  hp = myHp;
  strength = myStrength;
  money = myMoney;
}

// Implementação do constructor de cópia
Individual::Individual(const Individual& other)
{
  cout << "Inicializando Individaul no constructor de copia.\n";
  this->name = other.name;
  this->breed = other.breed;
  this->hp = other.hp;
  this->strength = other.strength;
  this->money = other.money;
}

void Individual::setName(string myName)
{
  if (myName.length() > MAXSIZENAME)
  {
    name = myName.substr(0,MAXSIZENAME);
    cout << "Nome alterado, mas excedeu o tamanho minimo. \n";
    return;
  }

  name = myName;
}

void Individual::setBreed(string myBreed)
{
  if (myBreed.length() > MAXSIZEBREED)
    {
      breed = myBreed.substr(0,MAXSIZEBREED);
      cout << "Tipo da raca alterado, mas o nome excedeu o tamanho minimo. \n";
      return;
    }

    breed = myBreed;
}

void Individual::setHp(double myHp)
{
  this->hp = myHp;
}

void Individual::setStrength(double myStrength)
{
  this->strength = myStrength;
}

void Individual::setMoney(double myMoney)
{
  this->money = myMoney;
}

string Individual::getName() const
{
  return name;
}

string Individual::getBreed() const
{
  return breed;
}

double Individual::getHp() const
{
  return hp;
}

double Individual::getStrength() const
{
  return strength;
}

double Individual::getMoney() const
{
  return money;
}

// Implementação do destructor
Individual::~Individual( )
{  

}

void Individual::restoreHp(double refill)
{
  this->hp+=refill;
}

double Individual::buyItem(double itemValue) const
{
  double saldo = this->money;

  if(itemValue > this->money)
  {
    cout << "Dinheiro insuficiente\n\n";
    return saldo;
  }

  saldo-=itemValue;
  cout << "Parabens pela compra!\n\n";
  
  return saldo;
}

void Individual::print( ) const
{
  cout << "Nome: " << name << "\n";
  cout << "Breed: " << breed << "\n";
  cout << "HP: " << hp << "\n";
  cout << "Strength: " << strength << "\n";
  cout << "Money: " << money << "\n\n";
}
