#include <iostream>
#include "Player/Player.h"
#include "Enemy/Enemy.h"
#include "Combat/Combat.h"
#include "Character/Character.h"
#include "Combat/Action.h"


int main() {
    Player *player = new Player("Victor", 100, 10, 4, 3);
    //Player *player2 = new Player("Santiago", 100, 10, 4, 3);
    Enemy *enemy = new Enemy("Goblin", 15, 6, 2, 5, 10);
    Enemy *enemy2 = new Enemy("Orc", 15, 6, 2, 5, 10);

    vector<Character*> participants;

    participants.push_back(player);
    //participants.push_back(player2);
    participants.push_back(enemy);
    participants.push_back(enemy2);

    Combat *combat = new Combat(participants);
    combat->doCombat();

    delete player;
    delete enemy;
    delete enemy2;
    delete combat;
    return 0;
}
