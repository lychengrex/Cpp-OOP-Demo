#include "../include/Bird.h"

Bird::Bird(const std::string& name, int age) : Animal(name, age) {
    std::cout << "Bird " << name << " (age: " << age << ")"
              << " constructor called.\n";
}

Bird::~Bird() {
    std::cout << "Bird " << name << " destructor called.\n";
}

void Bird::makeSound() const {
    std::cout << "Bird " << name << " says Tweet!\n";
}
