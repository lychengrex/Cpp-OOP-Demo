#include "../include/Bird.h"

Bird::Bird(const std::string& name) : Animal(name) {
    std::cout << "Bird constructor called.\n";
}

Bird::~Bird() {
    std::cout << "Bird destructor called.\n";
}

void Bird::makeSound() const {
    std::cout << name << " says Tweet!\n";
}
