#include <iostream>
#include <cmath>

int main()
{
    float pi = M_PI;
    std::cout.setf(std::ios::scientific);
    std::cout << pi << std::endl;
    int value = 1234;
    std::cout.setf(std::ios::right | std::ios::oct, std::ios::basefield);
    std::cout.width(8);
    std::cout.fill('-');
    std::cout << value << std::endl;

    return 0;
}