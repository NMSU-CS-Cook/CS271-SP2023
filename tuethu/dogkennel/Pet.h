#include <string>

class Pet
{
public:
   Pet(std::string name);
   ~Pet(); // destructor
   void eat();
protected:
   std::string name;
};
