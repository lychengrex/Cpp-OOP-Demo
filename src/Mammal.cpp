#include "../include/Mammal.h"

Mammal::Mammal(const std::string& name) : Animal(name) {
    std::cout << "Mammal constructor called.\n";
}

Mammal::~Mammal() {
    std::cout << "Mammal destructor called.\n";
}

void Mammal::makeSound() const {
    std::cout << name << " says Woof!\n";
}

void Mammal::eat() {
    std::cout << name << " is munching.\n";
}
