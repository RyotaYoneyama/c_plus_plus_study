#include <iostream>

template <int i>
void show_int_value() { std::cout << "int:" << i << std::endl; }

template <auto i>
void show_auto_value() { std::cout << "auto:" << i << std::endl; }

int main()
{
    show_int_value<3>();
    show_auto_value<33>();
    return 0;
}