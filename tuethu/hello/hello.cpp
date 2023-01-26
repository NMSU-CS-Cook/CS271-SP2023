#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Hello World!\n";
    for (int i=0; i<argc; i++) {
        std::cout << "arg: ("+std::string(argv[i])+")\n";
    }
}
