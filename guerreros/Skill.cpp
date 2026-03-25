#include "Skill.h"

// Constructor
Skill::Skill(string name, string damageType, int power, int energyCost) {
    // Validación name
    if (name.empty()) {
        this->name = "Unnamed";
    }
    else {
        this->name = name;
    }

    // Validación damageType
    if (damageType == "Physical" || damageType == "Magical" || damageType == "Healing") {
        this->damageType = damageType;
    }
    else {
        this->damageType = "Physical";
    }

    // Validación power (1–200)
    if (power < 1) {
        this->power = 1;
    }
    else if (power > 200) {
        this->power = 200;
    }
    else {
        this->power = power;
    }

    // Validación energyCost (0–100)
    if (energyCost < 0) {
        this->energyCost = 0;
    }
    else if (energyCost > 100) {
        this->energyCost = 100;
    }
    else {
        this->energyCost = energyCost;
    }
}

// Destructor
Skill::~Skill() {
    // No hay memoria dinámica interna
}

// Método calcular efecto
float Skill::calculateEffect() const {
    float multiplier;

    if (damageType == "Physical") {
        multiplier = 1.0;
    }
    else if (damageType == "Magical") {
        multiplier = 1.5;
    }
    else { // Healing
        multiplier = 0.8;
    }

    return power * multiplier;
}

// Getters
string Skill::getName() const {
    return name;
}

string Skill::getDamageType() const {
    return damageType;
}

int Skill::getPower() const {
    return power;
}

int Skill::getEnergyCost() const {
    return energyCost;
}