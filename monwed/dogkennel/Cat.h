#include <string>
#include "Pet.h"

class Cat : public Pet
{
public:
   Cat(std::string name);
   virtual void speak();
private:
};

