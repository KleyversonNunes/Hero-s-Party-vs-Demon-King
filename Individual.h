#define INDIVIDUAL_H
#include <string>
using std::string;

class Individual
{
public:
    Individual(); // Construtor vazio
    Individual(string, string, double, double, double);
    Individual(const Individual &); // Constructor de cópia
    ~Individual(); // Destructor

    void setName(string);
    void setBreed(string);
    void setHp(double);
    void setStrength(double);
    void setMoney(double);

    string getName() const;
    string getBreed() const;
    double getHp() const;
    double getStrength() const;
    double getMoney() const;

    void restoreHp(double);

    double buyItem(double) const;

    void print() const;

private:
    string name; // std::string
    string breed;
    double hp;
    double strength;
    double money;
    const int MAXSIZENAME = 10;
    const int MAXSIZEBREED = 5;
};
