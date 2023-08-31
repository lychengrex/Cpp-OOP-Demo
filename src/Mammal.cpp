#include "../include/Mammal.h"

int Mammal::instanceCount = 0;  // Initialize static member variable

Mammal::Mammal(const std::string& name, int age) : Animal(name, age) {
    std::cout << "Mammal " << name << " (age: " << age << ")"
              << " constructor called.\n";
    instanceCount++;  // Increment static member variable
}

Mammal::~Mammal() {
    std::cout << "Mammal " << name << " destructor called.\n";
    instanceCount--;  // Decrement static member variable
}

void Mammal::makeSound() const {
    std::cout << "Mammal " << name << " says Woof!\n";
}

void Mammal::eat() {
    std::cout << "Mammal " << name << " is munching.\n";
}

void Mammal::getInstanceCount() {
    std::cout << "Mammal instance count: " << instanceCount << "\n";
}
