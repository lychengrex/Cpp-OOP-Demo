#include "../include/ZooKeeper.h"

#include <iostream>

ZooKeeper::ZooKeeper(Zoo& zoo) : managedZoo(zoo) {}
ZooKeeper::~ZooKeeper() {
    std::cout << "ZooKeeper destructor called.\n";
}

void ZooKeeper::feedAnimals() const {
    std::cout << "ZooKeeper is feeding the animals..." << std::endl;
    managedZoo.feedAllAnimals();
    managedZoo.makeAllAnimalsEat();
}

void ZooKeeper::makeAnimalsSound() const {
    std::cout << "ZooKeeper is making the animals sound..." << std::endl;
    managedZoo.makeAllAnimalsSound();
}