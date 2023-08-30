#include "../include/Mammal.h"

int Mammal::instanceCount = 0;  // Initialize static member variable

Mammal::Mammal(const String& name) : Animal(name) {
    std::cout << "Mammal constructor called.\n";
    instanceCount++;  // Increment static member variable
}

Mammal::~Mammal() {
    std::cout << "Mammal destructor called.\n";
    instanceCount--;  // Decrement static member variable
}

void Mammal::makeSound() const {
    std::cout << name << " says Woof!\n";
}

void Mammal::eat() {
    std::cout << name << " is munching.\n";
}

void Mammal::staticFunction() {
    std::cout << "Static function called. Instance count: " << instanceCount << "\n";
}
