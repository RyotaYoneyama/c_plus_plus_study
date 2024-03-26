#include <iostream>
#include <string>

void array_test()
{
    int array[] = {4, 1, 3, 5, 6};

    for (const auto &a : array)
    {
        std::cout << a << std::endl;
    }
}

void char_array()
{
    char string[] = {"u*nko"};
    std::cout << string << std::endl;
}
int main()
{

    array_test();
    char_array();
}