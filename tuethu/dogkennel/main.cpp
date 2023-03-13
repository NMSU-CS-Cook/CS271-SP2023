#include <iostream>
#include <vector>
#include "Dog.h"

int main()
{
   std::vector<Dog*> kennel;
   std::cout << "This our dog kennel\n";
   kennel.push_back(new Dog("Zoe", 90, "Great Dane Mix"));
   kennel.push_back(new Dog("Luna", 110, "Husky-Heeler"));
   kennel.push_back(new Dog("Akari", 110, "German Shepherd"));
   for (Dog* dog: kennel) {
      dog->play();
   }
   std::cout << "-------------\n";
   for (int i=0; i < kennel.size(); i+=2) {
      kennel[i]->play();
   }
   std::cout << "-------------\n";
   for (Dog* dog: kennel) {
      dog->bark();
   }
   return 0;
}