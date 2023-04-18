
#include "Mammal.h"
#include <iostream>

Mammal::Mammal()
{
   std::cout << "Mammal constructor\n";
   isHungry = false;
}

void Mammal::eat()
{
   if (isHungry)
      std::cout << "Mammal eats\n";
   else
      std::cout << "Mammal is not hungry\n";
}
