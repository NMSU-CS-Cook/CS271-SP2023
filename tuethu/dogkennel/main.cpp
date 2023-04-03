#include <iostream>
#include <vector>
#include "Dog.h"

void doEat(Pet& pet)
{
   pet.eat();
   //pet.play(); // not allowed!
}

int main()
{
   //std::cout << "This is our Dog Kennel\n";
   Dog rover("Rover","grey",30);
   Dog* chito = new Dog("Cheeto","orange",10);
   doEat(rover);
   doEat(*chito);
   chito = new Dog("SonOfCheeto","yellow",10);
   return 0;
}

/**
   std::vector<Dog*> dogs;
   dogs.push_back(new Dog("Zoe", "grey", 90));
   dogs.push_back(new Dog("Nova", "brown", 40));
   dogs.push_back(new Dog("Brody", "brown", 15));
   dogs.push_back(new Dog("Skitz", "blue", 120));
   dogs.push_back(new Dog("Chewy", "brown", 12));
   std::cout << "-----Print--------\n";
   for (Dog* dog : dogs) {
      std::cout << *dog << "\n";
   }
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

**/