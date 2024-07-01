
#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Player.h"
using namespace std;

class Human : public Player { 
    private:
        string name;
    public:
        Human();
        Human(string name1);
        string getName() override;
        Move* makeMove() override;
};

#endif