#include "../include/Animal.h"

int Animal::instanceCount = 0;

Animal::Animal(const std::string& name, int age) : name(name), age(age) {
    instanceCount++;
    std::cout << "Animal " << name << " (age: " << age << ")"
              << " constructor called.\n";
}

Animal::~Animal() {
    instanceCount--;
    std::cout << "Animal " << name << " destructor called.\n";
}

void Animal::eat() {
    std::cout << "Animal " << name << " is eating.\n";
}

std::string Animal::getName() const {
    return name;
}

void Animal::getInstanceCount() {
    std::cout << "Animal instance count: " << instanceCount << "\n";
}