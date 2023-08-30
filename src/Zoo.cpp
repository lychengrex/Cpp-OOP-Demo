#include "../include/Zoo.h"

Zoo::Zoo() {
    std::cout << "Zoo constructor called.\n";
}

Zoo::~Zoo() {
    std::cout << "Zoo destructor called.\n";
}

void Zoo::addAnimal(Animal* animal) {
    animals.push_back(animal);
}

void Zoo::makeAllAnimalsSound() {
    for (const auto& animal : animals) {
        animal->makeSound();
    }
}
