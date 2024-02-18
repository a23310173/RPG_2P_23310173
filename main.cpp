#include <iostream>
#include "Player/Player.h"
#include "Enemy/Enemy.h"

int main() {
    Player *player = new Player("Victor", 100, 8, 4, 10);
    Enemy *enemy = new Enemy("Estudiante de Redes", 50, 5, 2, 5, 10);

    cout << player->toString() << endl;
    cout << enemy->toString() << endl;

    cout << "=====================" << endl;

    /* Este ciclo do while se encarga de mantener la pelea hasta que uno de los jugadores queda sin vida*/
    do {
        player->doAttack(enemy);
        enemy->doAttack(player);
        // En esta parte se hace un if function para setear la vida a 0 del perdedor y que no queden negativo
        if (player->getHealth() < 0){
            player->setHealth(player, 0);
        }
        else if (enemy->getHealth() < 0){
            enemy->setHealth(enemy, 0);
        }
        else {NULL;}

        // cout << player->getHealth() << endl; Prueba para ver como va la vida durante el combate
        // cout << enemy->getHealth() << endl;  Prueba para ver como va la vida durante el combate
    } while (player->getHealth() > 0 && enemy->getHealth() > 0);

    cout << player->toString() << endl;
    cout << enemy->toString() << endl;

    delete player;
    delete enemy;
    return 0;
}
