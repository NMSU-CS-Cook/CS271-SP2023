#include <iostream>

int x;  // Global Variables are BAD!!!!!

void printArray(int array[], int size)
{
    int i = 0;
    x = 42;
    while (i < size) {
        std::cout << "array[" << i << "] = " << array[i] << "\n";
        i++;
    }
    //array[3] = 1234;
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
    printArray(vals,10);
    //std::cout << "vals[3]=" << vals[3] << "\n";
    std::cout << "x is " << x << "\n";
    return 0;
}
