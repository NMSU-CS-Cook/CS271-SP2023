#include <iostream>

void f(int& v)
{
   v = 77;
}

int main(int argc, char* argv[])
{
   int x{42};
   int* p{nullptr};
   double* pd{nullptr};
   std::cout << "x=" << x << "\n";
   std::cout << "p=" << p << "\n";
   p = new int[100]; // pointer-array duality
   for (int i=0; i < 100; i++) {
      p[i] = 200+i;
   }
   std::cout << "p[2]=" << p[2] << "\n";
   std::cout << "p[77]=" << p[77] << "\n";
   std::cout << "*p=" << *p << "\n";
   std::cout << "p[0]=" << p[0] << "\n";
   std::cout << "p[1000]=" << p[1000] << "\n";
   std::cout << "p[100000]=" << p[100000] << "\n";
   return 0;


   pd = new double;
   *pd = 76.9999;
   *p = 123;
   *p = *pd;
   std::cout << "p=" << p << "\n";
   std::cout << "*p=" << *p << "\n";
   std::cout << "*pd=" << *pd << "\n";
   f(*p);
   std::cout << "x=" << x << "\n";
   std::cout << "argc=" << argc << "\n";
   argc = 99;
   std::cout << "argc=" << argc << "\n";
   delete p;
   return 0;
}