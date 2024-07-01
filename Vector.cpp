#include "Vector.h"
#include <sstream>
#include <iterator>

Vector::Vector(){
    holder.push_back(std::vector<std::string>{"Rock","Paper"});
    holder.push_back(std::vector<std::string>{"Paper","Scissors"});
    holder.push_back(std::vector<std::string>{"Scissors","Rock"});
    holder.push_back(std::vector<std::string>{"Monkey","Pirate","Zombie"});
    holder.push_back(std::vector<std::string>{"Robot","Monkey","Pirate"});
    holder.push_back(std::vector<std::string>{"Pirate","Ninja","Zombie"});
    holder.push_back(std::vector<std::string>{"Ninja","Robot","Monkey"});
    holder.push_back(std::vector<std::string>{"Zombie","Robot","Ninja"});
}

void Vector::addVector(){
    //users can input multiple moves -> first move is move and the others being the moves that it loses against.
    std::string moves;
    std::cout << "Add Moves: ";
    std::getline(std::cin,moves);
    std::istringstream iss(moves);
    std::vector<std::string> moveTokens(std::istream_iterator<std::string>{iss},std::istream_iterator<std::string>());
    holder.push_back(moveTokens);
}

void Vector::callVector(){
    for (auto i = holder.begin(); i != holder.end(); ++i){
        for (auto j = std::next(i->begin()); j != i->end(); ++j){
            std::cout << *j;
        }
        std::cout << std::endl;
    }
}

bool Vector::lose(Move* move,Move* move2){
    //checks if win or lose (tie is counted as a win)
    for (auto it = holder.begin(); it != holder.end(); ++it) {
        if (move->getName() == (*it)[0]) {
            //std::cout << "Move found!:" << (*it)[0] << std::distance(holder.begin(), it) << std::endl;
            for (auto inner_it = std::next(it->begin()); inner_it != it->end(); ++inner_it) {
                if (move2->getName() == *inner_it) {
                    //std::cout << *inner_it << std::distance(it->begin(), inner_it) << std::endl;
                    return true;
                }
            }
        }
    }
    return false;
}

// bool Vector::checkVec(std::string move){
//     //checks if input is valid;
//     for (int i=0;i < holder.size();i++){
//         if (move==holder[i][0]){
//                 return true;
//         }
//     }
//     return false;
// }