#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"

void saySomething(Pet& pet)
{
   pet.speak();
}

int main()
{
   std::vector<Pet*> pets;
   pets.push_back(new Dog("Zoe", "grey", 90));
   pets.push_back(new Dog("Nova", "brown", 40));
   pets.push_back(new Cat("Garfield"));
   pets.push_back(new Dog("Brody", "brown", 15));
   pets.push_back(new Dog("Skitz", "blue", 120));
   pets.push_back(new Dog("Chewy", "brown", 12));
   std::cout << "-----Speak--------\n";
   for (Pet* pet : pets)
   {
      //saySomething(*pet);
      pet->speak();
   }
   Cat mcjagger("McJagger");
   mcjagger.sleep();
   saySomething(mcjagger);
   mcjagger.speak();
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