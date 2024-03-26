#include <iostream>

void hello_world()
{
    std::cout << "hello, world" << std::endl;
}

int sum(const int &a, const int &b, const int &c)
{
    return a + b + c;
}
int main()
{
    hello_world();
    std::cout << "sum(5, 1, -2):" << sum(5, 1, -2) << std::endl;
}