#pragma once
#include <memory>  // For std::shared_ptr
#include <vector>

#include "Animal.h"

class ZooKeeper;  // Forward declaration

class Zoo {
   public:
    Zoo();                                           // Declare default constructor
    ~Zoo();                                          // Declare destructor
    void addAnimal(std::shared_ptr<Animal> animal);  // Using smart pointers
    void feedAllAnimals() const;                     // Marked as const
    void makeAllAnimalsSound() const;                // Marked as const
    void makeAllAnimalsEat() const;                  // Marked as const
    friend class ZooKeeper;                          // Grant ZooKeeper special access
    void listAllAnimals() const;                     // Marked as const
   private:
    std::vector<std::shared_ptr<Animal>> animals;  // Using smart pointers
};
