#include <iostream>
#include "printarray.h"

// Definition of printArray
void printArray(int array[], int size)
{
    int i = 0;
    while (i < size)
    {
        std::cout << "vals[" << i << "] = "
             << array[i] << "\n";
        i++;
    }
}
