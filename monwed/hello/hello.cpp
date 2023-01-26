#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::cout << "Hello World!\n";
    for (int i=1; i < argc; i++) {
        std::string s = argv[i];
        std::cout << "arg ("+s+")\n";
    }
}
