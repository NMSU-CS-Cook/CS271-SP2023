#include <iostream>
#include <vector>
#include "Dog.h"

int main()
{
   std::cout << "This is our Dog Kennel\n"; 
   std::vector<Dog*> dogs;
   dogs.push_back(new Dog("Zoe", "Grey", 90));
   dogs.push_back(new Dog("Nova", "brown", 50));
   dogs.push_back(new Dog("Brody", "brown", 15));
   dogs.push_back(new Dog("Skitz", "blue", 120));
   dogs.push_back(new Dog("Chewy", "brown", 12));
   for (int i=0; i < dogs.size(); i+=2) {
      dogs[i]->play();
   }
   std::cout << "-------------\n";
   for (int i=1; i < dogs.size(); i+=2) {
      dogs[i]->eat();
   }
   std::cout << "-------------\n";
   for (int i=0; i < dogs.size(); i+=2) {
      dogs[i]->sleep();
   }
   std::cout << "-------------\n";
   for (Dog* dog: dogs) {
      dog->play();
   }
   return 0;
}