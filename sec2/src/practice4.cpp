#include <iostream>

int main()
{
    int array[]{1, 3, 4, 5};

    for (const auto &a : array)
    {
        std::cout << a << std::endl;
    }
    decltype(1) j;
    j = 234.555f;
    std::cout << j << std::endl;
}
