#include <iostream>
#include <vector>
#include "Dog.h"


void usePet(Pet& pet)
{
   pet.sleep();
   //pet.play(); // not allowed, play() is in Dog
}

void func()
{
      //std::cout << "This is our Dog Kennel\n";
   Dog mike("Mike","black",140);
   Dog* rover = new Dog("Rover", "brown", 30);
   mike.play();
   rover->play();
}

int main()
{ 
   func();
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
   std::cout << "-----Experiments--------\n";
   usePet(*dogs[2]);

*/