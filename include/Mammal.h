#pragma once
#include "Animal.h"

class Mammal : public Animal {
   public:
    Mammal(const String& name);
    ~Mammal();

    // Overriding pure virtual function
    void makeSound() const override;

    // Overriding virtual function
    void eat() override;

    // Friend function to access protected members
    friend void mammalFriendFunction(const Mammal& mammal);

    // Static member function
    static void staticFunction();

   private:
    static int instanceCount;  // Static member variable
};
