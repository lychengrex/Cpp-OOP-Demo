#pragma once
#include "Zoo.h"

// The ZooKeeper class is responsible for managing the animals in the Zoo.
// It can feed animals and make them produce sounds.
class ZooKeeper {
   public:
    // Constructor: Initializes a ZooKeeper to manage a given Zoo.
    ZooKeeper(Zoo& zoo);
    ~ZooKeeper();

    // Feeds all animals in the Zoo.
    // Purpose: To simulate the feeding of animals in a zoo environment.
    void feedAnimals() const;

    // Makes all animals in the Zoo produce sounds.
    // Purpose: To simulate the sounds of animals in a zoo environment.
    void makeAnimalsSound() const;

   private:
    Zoo& managedZoo;  // The Zoo that this ZooKeeper manages.
};
