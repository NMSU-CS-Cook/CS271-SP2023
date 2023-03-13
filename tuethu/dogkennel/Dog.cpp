#include <iostream>
#include "Dog.h"

Dog::Dog(std::string name, int weight,
    std::string breed)
{
   this->name = name;
   this->weight = weight;
   this->breed = breed;
}

void Dog::play()
{
   std::cout << name << " is playing!\n";
}

void Dog::bark()
{
   if (weight > 100) {
      std::cout << name << "WOOF!\n";
   } else if (weight > 50) {
      std::cout << name << "Woof!\n";
   } else {
      std::cout << name << "yap!\n";
   }
}




