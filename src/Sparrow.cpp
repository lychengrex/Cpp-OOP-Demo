#include "../include/Sparrow.h"

#include <iostream>

Sparrow::Sparrow(const std::string& name, int age) : Bird(name, age) {
    std::cout << "Sparrow " << name << " (age: " << age << ")"
              << " constructor called." << std::endl;
}

Sparrow::~Sparrow() {
    std::cout << "Sparrow " << name << " destructor called." << std::endl;
}

void Sparrow::makeSound() const {
    std::cout << "Sparrow " << name << ": Chirp! Chirp!" << std::endl;
}
