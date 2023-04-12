#include <string>
#include <iostream>
#include "Pet.h"

class Dog : public Pet
{
public:
   Dog(std::string name, std::string color,
       int weight);
   ~Dog();
   void sleep();
   void play();
   virtual void eat();
   virtual void speak() override;
   friend std::ostream &operator<<(std::ostream &os, const Dog &dog);
private:
   int weight;
   std::string color;
   bool isHungry;
   bool isTired;
};
