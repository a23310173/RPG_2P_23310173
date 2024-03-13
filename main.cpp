#include <iostream>
#include "Player/Player.h"
#include "Enemy/Enemy.h"
#include "Combat/Combat.h"
#include "Character/Character.h"
#include "Combat/Action.h"


int main() {
    Player *player = new Player("Victor", 85, 7, 4, 5);
    Player *player2 = new Player("Santiago", 50, 10, 2, 3);
    Enemy *enemy = new Enemy("Goblin", 30, 10, 2, 5, 10);
    Enemy *enemy2 = new Enemy("Orc", 30, 6, 5, 5, 10);

    vector<Character*> participants;

    participants.push_back(player);
    participants.push_back(player2);
    participants.push_back(enemy);
    participants.push_back(enemy2);

    Combat *combat = new Combat(participants);
    combat->doCombat();

    delete player;
    delete player2;
    delete enemy;
    delete enemy2;
    delete combat;
    return 0;
}
