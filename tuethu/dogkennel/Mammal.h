#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal
{
public:
   Mammal();
   virtual void eat(); 
protected:
   bool isHungry;
};

#endif