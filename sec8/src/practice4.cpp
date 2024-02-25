#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    float pi = M_PI;
    std::cout << "pi: " << std::scientific << pi << std::endl;
    int value = 1234;

    std::cout << "value: " << std::right << std::setfill('0') << std::oct << std::setw(8) << value << std::endl;
}