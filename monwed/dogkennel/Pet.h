
#ifndef PET_H
#define PET_H

class Pet
{
public:
   Pet(std::string name);
   ~Pet();
   void sleep();
   virtual void speak();
protected:
   std::string name;
};

#endif