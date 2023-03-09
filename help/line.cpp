
#include <iostream>
#include <string>

std::string makeLine()
{
    std::string line("");
    line += " ";
    line += " ";
    line += "+";
    line += " ";
    line += "*";
    return line;
}

int main()
{
    std::string output;
    output = makeLine();
    std::cout << output << "\n";
    return 0;
}

