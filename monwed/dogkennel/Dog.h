#include <string>

class Dog
{
public:
   Dog(std::string name, std::string color,
       int weight);
   void sleep();
   void play();
   void eat();
private:
   enum {SEX_MALE, SEX_FEMALE} sex;
   int weight;
   std::string name;
   std::string color;
   bool isHungry;
   bool isTired;
};
