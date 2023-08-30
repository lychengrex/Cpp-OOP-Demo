#ifndef ANIMAL_H  // #ifndef to avoid multiple inclusions
#define ANIMAL_H

#include <iostream>
#include <string>

#define MAX_AGE 100  // Macro to define maximum age

// #error directive (comment this line to compile successfully)
// #error "This is an error message"

typedef std::string String;  // typedef for std::string

class Animal {
   public:
    Animal(const String& name);
    virtual ~Animal();

    // Pure virtual function to make a sound
    virtual void makeSound() const = 0;

    // Virtual function for eating
    virtual void eat();

    // Inline function to get maximum age
    inline int getMaxAge() const { return MAX_AGE; }

   protected:
    String name;
};

#endif  // ANIMAL_H
