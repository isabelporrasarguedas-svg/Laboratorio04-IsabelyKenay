#ifndef SKILL_H
#define SKILL_H

#include <string>
using namespace std;

class Skill {
private:
    string name;
    string damageType;
    int power;
    int energyCost;

public:
    // Constructor
    Skill(string name, string damageType, int power, int energyCost);

    // Destructor
    ~Skill();

    // Métodos
    float calculateEffect() const;

    // Getters
    string getName() const;
    string getDamageType() const;
    int getPower() const;
    int getEnergyCost() const;
};

#endif
