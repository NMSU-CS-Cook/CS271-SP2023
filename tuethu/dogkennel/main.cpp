#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"

int main()
{
   std::vector<Pet*> pets;
   pets.push_back(new Dog("Zoe", "grey", 90));
   pets.push_back(new Dog("Nova", "brown", 40));
   pets.push_back(new Cat("Brody"));
   //pets.push_back(new Pet("Pet"));
   pets.push_back(new Cat("Skitz"));
   pets.push_back(new Dog("Chewy", "brown", 12));
   std::cout << "-----Print--------\n";
   for (Pet* pet : pets) {
      pet->speak();
      //pet->eat();
   }
   Dog* zoe = dynamic_cast<Dog*>(pets[0]);
   //Mammal* zoem = dynamic_cast<Mammal*>(zoe);
   zoe->eat();
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