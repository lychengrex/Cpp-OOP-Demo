#include "../include/Animal.h"

Animal::Animal(const std::string& name) : name(name) {
    std::cout << "Animal constructor called.\n";
}

Animal::~Animal() {
    std::cout << "Animal destructor called.\n";
}

void Animal::eat() {
    std::cout << name << " is eating.\n";
}
