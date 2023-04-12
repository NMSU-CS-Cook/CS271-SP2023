#include <iostream>
#include "Dog.h"

Dog::Dog(std::string name, std::string color,
   int weight)
   : Pet(name)
{
   std::cout << "In Dog constructor for " << name << "\n";
   this->color = color;
   this->weight = weight;
   isHungry = false;
   isTired = false;
}

Dog::~Dog()
{
   std::cout << "In Dog destructor for " << name << "\n";
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
   os << "I'm " << dog.name << " and big ";
   os << "and " << dog.color << " and ";
   os << "not tired and not hungry" << "!";
   return os;
}

void Dog::sleep()
{
   std::cout << name << " is sleeping\n";
}

void Dog::play()
{
   std::cout << name << " is playing\n";
}

void Dog::eat()
{
   std::cout << "Dog " << name << " is eating\n";
}

void Dog::speak()
{
   std::cout << name << " barks loudly!\n";
}
