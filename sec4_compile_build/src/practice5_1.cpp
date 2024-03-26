#include <iostream>
extern int i;

int main()
{
    std::cout << "i:" << i << std::endl;
    i = 4;
    std::cout << "i:" << i << std::endl;
}