
#include <iostream>

void f(int& v)
{
   v = 33;
   std::cout << "v=" << v << "\n";
}

int main(int argc, char* argv[])
{
   int x = 42;
   int* p;
   int& r = x;  // DO NOT USE THESE!!!
   std::cout << "x=" << x << "\n";
   std::cout << "p=" << p << "\n";
   //p = &x; // address of x
   p = new int[100]; // creates 100-element array
   for (int i =0; i<100; i++) {
      // array-pointer duality
      p[i] = 200+i;
   }
   //*p = 37; // we are dereferencing p here
   std::cout << "p=" << p << "\n";
   std::cout << "*p=" << *p << "\n";
   std::cout << "p[3]=" << p[3] << "\n";
   std::cout << "p=[77]" << p[77] << "\n";
   std::cout << "x=" << x << "\n";
   std::cout << "argc=" << argc << "\n";
   f(*p);
   std::cout << "x=" << x << "\n";
   std::cout << "r=" << r << "\n";
   return 0;
}


