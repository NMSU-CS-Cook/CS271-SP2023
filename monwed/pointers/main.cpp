//
// Pointers and references
//
#include <iostream>

// true pass-by-reference on simple datatypes by declaring 
// the parameter as a reference type
void f(int& v)
{
   v = 33;
   std::cout << "v=" << v << "\n";
}

int main(int argc, char* argv[])
{
   int x = 42; // simple int variable
   int* p;     // pointer to an int; this does not allocate space for an int!
   int& r = x; // reference (alias) to an int; 'r' is another name for 'x' now
   // note: pointers can change what they point to; references cannot change!
   std::cout << "x=" << x << "\n";
   std::cout << "p=" << p << "\n";
   p = &x; // '&' operator is said as "address of x", it creates a pointer value
   *p = 33; // this assigns 33 to whatever p points to, in this case 'x'
   // now use p to point to a newly created array
   p = new int[100]; // creates 100-element array
   for (int i =0; i<100; i++) {
      // array-pointer duality; we can "index" p as an array
      p[i] = 200+i;
   }
   std::cout << "p=" << p << "\n";         // prints a pointer value
   std::cout << "*p=" << *p << "\n";       // dereferences p and prints an int
   std::cout << "p[3]=" << p[3] << "\n";   // prints int at index 3 from *p
   std::cout << "p=[77]" << p[77] << "\n"; // *p == p[0], so p[77] == *(p+77)
   std::cout << "x=" << x << "\n";
   std::cout << "argc=" << argc << "\n";
   f(*p); // since f needs a reference, not a pointer, we have to use *p
   std::cout << "x=" << x << "\n";
   std::cout << "r=" << r << "\n";
   return 0;
}


