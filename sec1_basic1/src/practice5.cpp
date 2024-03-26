#include <iostream>

void double_pointer_test()
{
    int a{1};
    const int *p = &a;
    const int **pp = &p;

    std::cout << "a:" << a << std::endl;
    std::cout << "&a:" << &a << std::endl;
    std::cout << "p:" << p << std::endl;
    std::cout << "*p:" << *p << std::endl;
    std::cout << "&p:" << &p << std::endl;
    std::cout << "pp:" << pp << std::endl;
    std::cout << "*pp:" << *pp << std::endl;
    std::cout << "&pp:" << &pp << std::endl;
}

void show_value(float f)
{

    std::cout << f << std::endl;
}

void insert42(int *i)
{
    *i = 42;
}

void float_calc_check()
{
    float f = 100.001f;
    f -= 100;
    std::cout << "float check:" << f << std::endl;
}

int main()
{
    double_pointer_test();

    float i = 42.195f;
    show_value(i);

    int ii = 0;

    insert42(&ii);
    std::cout << "ii:" << ii << std::endl;

    float_calc_check();
}