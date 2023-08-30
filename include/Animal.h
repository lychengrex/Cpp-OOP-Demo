#pragma once
#include <iostream>
#include <string>

class Animal {
   public:
    Animal(const std::string& name);
    virtual ~Animal();
    virtual void makeSound() const = 0;
    virtual void eat();

   protected:
    std::string name;
};
