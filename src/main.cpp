#include <memory>  // For std::unique_ptr

#include "../include/Animal.h"
#include "../include/Bird.h"
#include "../include/Mammal.h"
#include "../include/Zoo.h"

// Function to demonstrate call by reference
void modifyName(String& name) {
    name += " Modified";
}

// Friend function to access protected members
void mammalFriendFunction(const Mammal& mammal) {
    std::cout << "Friend function can access protected name: " << mammal.name << "\n";
}

// Operator overloading (demonstrates early binding)
bool operator==(const Animal& a1, const Animal& a2) {
    return a1.getMaxAge() == a2.getMaxAge();
}

int main() {
    Zoo myZoo;

    volatile bool runZoo = true;  // volatile keyword

    // Simulated external change (e.g., from another thread or hardware interrupt)
    // This would typically be changed by some external event
    runZoo = false;

    if (runZoo) {
        std::cout << "The zoo is running.\n";
        // Code for running the zoo
    } else {
        std::cout << "The zoo is not running.\n";
    }

    auto dog = std::make_unique<Mammal>("Dog");  // Using smart pointers
    auto sparrow = std::make_unique<Bird>("Sparrow");

    // Call by reference
    String dogName = "Dog";
    modifyName(dogName);
    std::cout << "Modified name: " << dogName << std::endl;

    myZoo.addAnimal(std::move(dog));
    myZoo.addAnimal(std::move(sparrow));

    myZoo.makeAllAnimalsSound();

    // Call static function
    Mammal::staticFunction();

    return 0;
}
