#include <vector>
#include <string>
#include <iostream>
#include "Vector.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"

int main(){
    
    Player* player1 = new Human("Hermes");
    Player* player2 = new Human("Jonathon");
    Referee referee;

    Player* game = referee.refGame(player1, player2);
    if (game == player1){
        std::cout << "p1 wins" << std::endl;
    } else if (game == player2 ){
        std::cout << "p2 wins" << std::endl;
    } else {
        std::cout << "tie" << std::endl;
    }


    return 0;

}