
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
   p = new int;
   *p = 37; 
   std::cout << "p=" << p << "\n";
   std::cout << "*p=" << *p << "\n";
   std::cout << "x=" << x << "\n";
   std::cout << "argc=" << argc << "\n";
   f(*p);
   std::cout << "x=" << x << "\n";
   std::cout << "r=" << r << "\n";
   return 0;
}


