#include "../include/Zoo.h"

Zoo::Zoo() {
    std::cout << "Zoo constructor called.\n";
}

Zoo::~Zoo() {
    std::cout << "Zoo destructor called.\n";
}

void Zoo::addAnimal(std::unique_ptr<Animal> animal) {
    if (animal) {  // Check for null pointer
        animals.push_back(std::move(animal));
    }
}

void Zoo::makeAllAnimalsSound() {
    for (const auto& animal : animals) {
        if (animal) {  // Check for null pointer
            animal->makeSound();
        }
    }
}
