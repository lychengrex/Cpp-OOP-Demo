#include "../include/Animal.h"
#include "../include/Mammal.h"
#include "../include/Bird.h"
#include "../include/Zoo.h"

void mammalFriendFunction(const Mammal& mammal) {
    std::cout << "Friend function can access protected name: " << mammal.name << "\n";
}

int main() {
    Zoo myZoo;

    Animal* dog = new Mammal("Dog");
    Animal* sparrow = new Bird("Sparrow");

    myZoo.addAnimal(dog);
    myZoo.addAnimal(sparrow);

    myZoo.makeAllAnimalsSound();

    mammalFriendFunction(*(static_cast<Mammal*>(dog)));

    delete dog;
    delete sparrow;

    return 0;
}
