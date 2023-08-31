#pragma once
#include "Bird.h"

class Sparrow : public Bird {
   public:
    Sparrow(const std::string& name, int age);
    ~Sparrow();
    void makeSound() const override;  // Override the virtual function from Animal
};
