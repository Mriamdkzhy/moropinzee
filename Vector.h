#ifndef VECTOR_H
#define VECTOR_H
#include <vector>
#include <string>
#include <iostream>
#include "Move.h"

class Vector {
    private:
        std::vector<std::vector<std::string> > holder;  
    public:
        Vector();
        void callVector();
        void addVector();
        bool lose(Move* move,Move* move2);
        //bool checkVec(std::string move);
};

#endif