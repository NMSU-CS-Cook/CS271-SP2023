#include <iostream>
#include <string>
#include "printarray.h"

int main(int argc, char *argv[])
{
    int vals[10];
    for (int i = 0; i < 10; i++)
    {
        vals[i] = i + 20;
    }
    printArray(vals,10);
    return 0;
}
