#include <iostream>
#include "Cat.h"

Cat::Cat(std::string name)
   : Pet(name)
{
   std::cout << "In Cat constructor for " << name << "\n";
}
