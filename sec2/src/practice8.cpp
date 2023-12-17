#include <iostream>

int main()
{
    auto show_value = [](const int &v) -> void
    {
        std::cout << v << std::endl;
    };

    show_value(42);
    int a = 32;

    auto show_value_copy = [=]() mutable -> void
    {
        std::cout << a << std::endl;
        a = 43;
        std::cout << a << std::endl;
    };


    show_value_copy();
    std::cout << a << std::endl;


    auto show_value_ref = [&]()  -> void
    {
        std::cout << a << std::endl;
        a = 52;
        std::cout << a << std::endl;
    };

    show_value_ref();
    std::cout << a << std::endl;

}