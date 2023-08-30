#pragma once
#include "Animal.h"

class Mammal : public Animal {
   public:
    Mammal(const std::string& name);
    ~Mammal();
    void makeSound() const override;
    void eat() override;

    friend void mammalFriendFunction(const Mammal& mammal);
};
