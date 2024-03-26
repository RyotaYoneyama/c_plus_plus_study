#include <iostream>

template <typename T>
T id(T val)
{
    return val;
}

int main()
{
    std::cout << "int:" << id<int>(2) << std::endl;
    std::cout << "float:" << id<float>(2.1234f) << std::endl;
    std::cout << "double:" << id<double>(2.12343) << std::endl;
    std::cout << "string:" << id<std::string>("test") << std::endl;
    return 0;
}