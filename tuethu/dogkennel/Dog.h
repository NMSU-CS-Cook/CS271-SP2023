#include <string>

class Dog
{
public:
   Dog(std::string name, int weight, 
      std::string breed); // constructor
   void play();
   void bark();
private:
   std::string name;
   int weight;
   std::string breed;
};
