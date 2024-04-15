#define WEAPON_H
#include <string>
using std::string;

class Weapon
{
public:
    Weapon(double,double,string,string); // Primeiro constructor
    Weapon(const Weapon &); // Constructor de cópia

    int getRestorations() const;
    void restoreWeapon();

    inline static int getNumRestores() { return numRestores; }
    inline static int getNumWeapons() { return numWeapons; }

    // Métodos relacionados aos arrays
    void exibirClassificacoes() const;
    void definirValorMedidas ();
    void exibirMedidas() const;
    void print();

private:
    double durability;
    double strength;
    string type;
    string range;
    int restorations; // Nº de restauções feitas
    //double weight;

    static int numRestores; // Nº máximo de restaurações
    static int numWeapons;
    //static const double CRITICALHITFACTOR = 1.75;

    /*
    static const int MAXATAQUESCONSECUTIVOS = 3;
    static double danosdeataques[ MAXATAQUESCONSECUTIVOS ];
    */

    // Classificação das armas: S, A, B, C, D
    // Criar um método que mostre as classificações das armas
    // Utilizando o loop for
    static const int NUMCLASSIFICACAOARMAS = 5;
    static const string CLASSIFICACOES[ NUMCLASSIFICACAOARMAS ];


    // Comprimento, largura, peso
    // Criar um método que mostre as medidas das armas
    // Utilizando o loop while
    static const int NUMDEMEDIDAS = 3;
    static string medidas[ NUMDEMEDIDAS ];
    double valorMedidas[ NUMDEMEDIDAS ];
};