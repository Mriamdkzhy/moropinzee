#include "Human.h"
#include <string>
#include <iostream>
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
using namespace std;

Human::Human(){
    name = "Human";
}

Human::Human(string name1){
    name = name1;
}

string Human::getName(){
    return name;
}

Move* Human::makeMove(){
    std::string move;
    cout << "Move: ";
    cin >> move;
    if (move=="Zombie"){
        return new Zombie;
    } else if (move=="Monkey"){
        return new Monkey;
    } else if (move=="Robot"){
        return new Robot;
    } else if (move=="Pirate"){
        return new Pirate;
    } else if (move=="Ninja"){
        return new Ninja;
    }
    return nullptr;
}
