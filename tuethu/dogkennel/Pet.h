#include <string>
#ifndef PET_H
#define PET_H

class Pet
{
public:
   Pet(std::string name);
   ~Pet(); // destructor
   virtual void eat(); 
   virtual void speak();
protected:
   std::string name;
};
#endif
