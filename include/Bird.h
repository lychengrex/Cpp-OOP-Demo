#pragma once
#include "Animal.h"

class Bird : public Animal {
   public:
    Bird(const std::string& name, int age);
    ~Bird();

    // Overriding pure virtual function
    void makeSound() const override;
};
