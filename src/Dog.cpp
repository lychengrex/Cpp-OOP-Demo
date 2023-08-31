#include "../include/Dog.h"

#include <iostream>

#include "../include/Mammal.h"

Dog::Dog(const std::string& name, int age) : Mammal(name, age) {
    std::cout << "Dog " << name << " (age: " << age << ")"
              << " constructor called." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog " << name << " destructor called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog " << name << ": Woof! Woof!" << std::endl;
}
