#include <iostream>
#include "Cat.h"

Cat::Cat(std::string name)
   : Pet(name)
{
}

void Cat::speak()
{
   std::cout << name << " meows quietly!\n";
}
