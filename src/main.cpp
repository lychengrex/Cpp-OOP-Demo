#include <iostream>
#include <memory>  // For std::unique_ptr and std::make_shared

#include "../include/Animal.h"
#include "../include/Bird.h"
#include "../include/Dog.h"
#include "../include/Mammal.h"
#include "../include/Sparrow.h"
#include "../include/Zoo.h"
#include "../include/ZooKeeper.h"

// Function to demonstrate call by reference
void modifyName(std::string& name) {
    name += " Modified";
}

// Friend function to access protected members
void mammalFriendFunction(const Mammal& mammal) {
    std::cout << "Friend function can access protected name: " << mammal.name << std::endl;
}

// Operator overloading (demonstrates early binding)
bool operator==(const Animal& a1, const Animal& a2) {
    return a1.getMaxAge() == a2.getMaxAge();
}

int main() {
    Zoo myZoo;
    ZooKeeper myZooKeeper(myZoo);

    volatile bool runZoo = true;  // volatile keyword

    /* Simulated external change (e.g., from another thread or hardware interrupt)
     * This would typically be changed by some external event
     */
    // runZoo = false;

    if (runZoo) {
        std::cout << "The zoo is running.\n";
        // Code for running the zoo
    } else {
        std::cout << "The zoo is not running.\n";
    }

    auto dog = std::make_unique<Dog>("Buddy", 5);  // Using smart pointers
    auto sparrow = std::make_unique<Sparrow>("Jack", 2);
    Mammal elephant("Elephant", 10);
    // Call the friend function
    mammalFriendFunction(elephant);
    mammalFriendFunction(*dog);

    // Call by reference
    std::string dogName = "Dog";
    modifyName(dogName);
    std::cout << "Modified name: " << dogName << std::endl;

    myZoo.addAnimal(std::move(dog));
    myZoo.addAnimal(std::move(sparrow));
    myZoo.listAllAnimals();

    myZooKeeper.feedAnimals();
    myZooKeeper.makeAnimalsSound();

    // Call static function
    Mammal::getInstanceCount();
    Animal::getInstanceCount();

    return 0;
}
