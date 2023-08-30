#pragma once
#include <vector>

#include "Animal.h"

class Zoo {
   public:
    Zoo();
    ~Zoo();
    void addAnimal(Animal* animal);
    void makeAllAnimalsSound();

   private:
    std::vector<Animal*> animals;
};
