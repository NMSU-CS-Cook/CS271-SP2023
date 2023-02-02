#include <iostream>

void testOperator()
{
   int v = 4;
   std::cout << "v is " << v << "\n";
   v = v << 2;
   std::cout << "v is " << v << "\n";
}

void printArray(int array[])
{
    int i = 0;
    while (i < 10) {
        std::cout << "array[" << i << "] = " << array[i] << "\n";
        i++;
    }
    array[3] = 1234;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello World!\n";
    for (int i=0; i<argc; i++) {
        std::cout << "arg: ("+std::string(argv[i])+")\n";
    }
    int vals[10];
    for (int i=0; i < 10; i++) {
        vals[i] = i+20;
    }
    //std::cout << "array size is " << vals.length << "\n";
    printArray(vals);
    std::cout << "vals[3]=" << vals[3] << "\n";
    testOperator();
    return 0;
}
