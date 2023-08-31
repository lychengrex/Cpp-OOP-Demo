#pragma once
#include "Animal.h"

class Mammal : public Animal {
   public:
    Mammal(const std::string& name, int age);
    ~Mammal();

    // Overriding pure virtual function
    void makeSound() const override;

    // Overriding virtual function
    void eat() override;

    // Friend function to access protected members
    friend void mammalFriendFunction(const Mammal& mammal);

    // Static member function
    static void getInstanceCount();

   private:
    static int instanceCount;  // Static member variable
};
