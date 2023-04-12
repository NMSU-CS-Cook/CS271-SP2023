#include <iostream>
#include <vector>
#include "Dog.h"

void saySomething(Pet& pet)
{
   pet.speak();
}

int main()
{
   std::vector<Dog *> dogs;
   dogs.push_back(new Dog("Zoe", "grey", 90));
   dogs.push_back(new Dog("Nova", "brown", 40));
   dogs.push_back(new Dog("Brody", "brown", 15));
   dogs.push_back(new Dog("Skitz", "blue", 120));
   dogs.push_back(new Dog("Chewy", "brown", 12));
   std::cout << "-----Speak--------\n";
   for (Dog *dog : dogs)
   {
      saySomething(*dog);
   }
   return 0;
}

/**
   std::cout << "-----Play--------\n";
   for (int i = 0; i < dogs.size(); i += 2) {
      dogs[i]->play();
   }
   std::cout << "-----Eat--------\n";
   for (int i = 2; i < dogs.size(); i++) {
      dogs[i]->eat();
   }
   std::cout << "-----Sleep--------\n";
   for (int i = 0; i < dogs.size()-2; i++) {
      dogs[i]->sleep();
   }
   std::cout << "-----Print--------\n";
   for (Dog* dog : dogs) {
      std::cout << *dog << "\n";
   }
   std::cout << "-----Experiments--------\n";
   usePet(*dogs[2]);

*/