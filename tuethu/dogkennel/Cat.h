#include <string>
#include <iostream>
#include "Pet.h"

class Cat : public Pet
{
public:
   Cat(std::string name);
   //virtual void speak() override;
private:
};
