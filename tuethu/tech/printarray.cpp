#include <iostream>

// Definition
void printArray(int array[], int size)
{
    int i = 0;
    while (i < size) {
        std::cout << "array[" << i << "] = " << array[i] << "\n";
        i++;
    }
}
