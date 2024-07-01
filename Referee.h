#include "Player.h"
#include "Human.h"

#ifndef REFEREE_H
#define REFEREE_H

#include <string>
#include "Player.h"
using namespace std;

class Referee {
    public:
        Referee(); // constructor
        Player* refGame(Player* player1, Player* player2); // returns the reference to the winning player
};

#endif