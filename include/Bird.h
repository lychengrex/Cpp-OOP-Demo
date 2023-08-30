#pragma once
#include "Animal.h"

class Bird : public Animal {
   public:
    Bird(const std::string& name);
    ~Bird();
    void makeSound() const override;
};
