#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){

    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    Vector vec;
    bool win1 = vec.lose(move1,move2);
    bool win2 = vec.lose(move2,move1);
    if (win1==false && win2==true){
        return player1;
    } else if (win1==true && win2==false){
        return player2;
    } 
    return nullptr;
}
