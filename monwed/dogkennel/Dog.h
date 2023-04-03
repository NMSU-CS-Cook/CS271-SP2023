#include <string>
#include <iostream>
#include "Pet.h"

class Dog : public Pet
{
public:
   Dog(std::string name, std::string color,
      int weight);
   ~Dog();
   void play();
   void eat();
   friend std::ostream& operator<<(std::ostream& os, const Dog& dog);
private:
   int weight;
   std::string color;
   bool isHungry;
   bool isTired;
};
