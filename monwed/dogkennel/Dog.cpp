#include <iostream>
#include "Dog.h"

Dog::Dog(std::string name, std::string color,
         int weight)
{
   std::cout << "In Dog constructor for " << name << "\n";
   this->name = name;
   this->color = color;
   this->weight = weight;
   isHungry = false;
   isTired = false;
}

void Dog::sleep()
{
   if (isTired)
   {
      std::cout << name << " is sleeping\n";
      isTired = false;
   }
   else
   {
      std::cout << name << " is not tired\n";
   }
}

void Dog::play()
{
   if (!isTired) {
     std::cout << name << " is playing\n";
      isTired = true;
      isHungry = true;
   } else {
      std::cout << name << " is too tired to play\n";
   }
}

void Dog::eat()
{
   if (isHungry)
   {
      std::cout << name << " is eating\n";
      isHungry = false;
      isTired = true;
   }
   else
   {
      std::cout << name << " is not hungry\n";
   }
}
