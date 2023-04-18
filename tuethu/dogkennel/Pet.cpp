#include <iostream>
#include "Pet.h"

Pet::Pet(std::string name)
{
   std::cout << "In Pet constructor for " << name << "\n";
   this->name = name;
}

Pet::~Pet()
{
   std::cout << "In Pet destructor for " << name << "\n";
}

/**
void Pet::speak()
{
   std::cout << name << " says Hello World!\n";
}
**/