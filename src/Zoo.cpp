#include "../include/Zoo.h"

#include <iostream>

Zoo::Zoo() {
    std::cout << "Zoo constructor called.\n";
}

Zoo::~Zoo() {
    std::cout << "Zoo destructor called.\n";
}

void Zoo::addAnimal(std::shared_ptr<Animal> animal) {
    if (animal) {  // Check for null pointer
        std::cout << "Adding an animal " << animal->getName() << " to the zoo." << std::endl;
        animals.push_back(std::move(animal));
    }
}

void Zoo::makeAllAnimalsSound() const {
    for (const auto& animal : animals) {
        if (animal) {  // Check for null pointer
            animal->makeSound();
        }
    }
}

void Zoo::makeAllAnimalsEat() const {
    for (const auto& animal : animals) {
        if (animal) {  // Check for null pointer
            animal->eat();
        }
    }
}

void Zoo::feedAllAnimals() const {  // Add this function
    for (const auto& animal : animals) {
        std::cout << "Feeding " << animal->getName() << std::endl;
    }
}

void Zoo::listAllAnimals() const {
    std::cout << "Zoo now has ";
    for (long unsigned int i = 0; i < animals.size(); i++) {
        if (i != animals.size() - 1)
            std::cout << animals[i]->getName() << ", ";
        else
            std::cout << animals[i]->getName() << ".";
    }
    std::cout << std::endl;
}