#ifndef PET_H
#define PET_H
#include <string>
#include "Mammal.h"

class Pet
{
public:
   Pet(std::string name);
   ~Pet(); // destructor
   virtual void speak()=0;
protected:
   std::string name;
};
#endif
