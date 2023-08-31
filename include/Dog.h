#pragma once
#include "Mammal.h"

class Dog : public Mammal {
   public:
    Dog(const std::string& name, int age);
    ~Dog();
    void makeSound() const override;  // Override the virtual function from Animal
};
