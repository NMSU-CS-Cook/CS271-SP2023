#include <iostream>
#include <string>

int x=42;

void printArray(int array[], int size)
{
    int i = 0;
    x = 76;
    while (i < size)
    {
        std::cout << "vals[" << i << "] = "
             << array[i] << "\n";
        i++;
    }
    array[3] = 1234;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello World!\n";
    std::cout << "x is " << x << "\n";
    for (int i = 1; i < argc; i++)
    {
        std::string s = argv[i];
        std::cout << "arg (" + s + ")\n";
    }
    // In class Jan 30
    int vals[10];
    for (int i = 0; i < 10; i++)
    {
        vals[i] = i + 20;
    }
    printArray(vals,10);
    std::cout << "vals[3]=" << vals[3] << "\n";
    std::cout << "x is " << x << "\n";
    return 0;
}
