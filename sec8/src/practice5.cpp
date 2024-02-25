#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in{__FILE__};
    if (in.is_open())
    {
        std::string line;
        while (!in.eof())
        {
            std::getline(in, line);
            std::cout << line << std::endl;
        }
    }
    else
    {
        std::cout << "The file cannot be opened." << std::endl;
    }
}