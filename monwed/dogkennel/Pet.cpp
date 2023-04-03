#include <iostream>
#include "Pet.h"

Pet::Pet(std::string name)
{
   std::cout << "In Pet constructor for " << name << "\n"; 
   this->name = name;
}

Pet::~Pet()
{
   std::cout << "in Pet destructor for " << name << "\n";
}

void Pet::sleep()
{
   std::cout << name << " is sleeping\n";
}

