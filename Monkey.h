#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move {
public:
  std::string getName();
};

#endif