#pragma once
#include "Animal.h"

class Bird : public Animal {
   public:
    Bird(const std::string& name);
    ~Bird();

    // Overriding pure virtual function
    void makeSound() const override;
};
