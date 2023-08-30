#pragma once
#include <memory>  // For std::unique_ptr
#include <vector>

#include "Animal.h"

class Zoo {
   public:
    Zoo();
    ~Zoo();

    // Add animal to zoo
    void addAnimal(std::unique_ptr<Animal> animal);

    // Make all animals make sound (demonstrates polymorphism)
    void makeAllAnimalsSound();

   private:
    std::vector<std::unique_ptr<Animal>> animals;  // Using smart pointers
};
