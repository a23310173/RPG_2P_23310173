//
// Created by Victor Navarro on 15/02/24.
//

#ifndef RPG_CHARACTER_H
#define RPG_CHARACTER_H
#include <string>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int attack;
    int defense;
    int speed;
public:
    Character(string _name, int _health, int _attack, int _defense, int _speed);

    virtual void doAttack(Character *target) = 0;
    virtual void takeDamage(int damage) = 0;

    string getName();
    int getHealth();
    int getAttack();
    int getDefense();
    int getSpeed();
    string toString();

    //Funcion para modificar la vida a 0 al perdedor de un combate (para que no quede negativo)
    virtual void setHealth(Character *target, int newHealth){ target->health = 0;};
};


#endif //RPG_CHARACTER_H
