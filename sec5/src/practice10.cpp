#include <iostream>

class A
{
private:
    int value = 0;

public:
    void set(int value) { this->value = value; }
    void foo();
    void copy_foo(int val);
};

void A::foo()
{
    auto lambda = [this]()
    {
        std::cout << value << std::endl;
    };
    lambda();
}

void A::copy_foo(int val)
{
    auto lambda = [*this, val]() mutable
    {
        std::cout << value << std::endl;
        value = val;
        std::cout << value << std::endl;
    };
    lambda();
    std::cout << value << std::endl;
}

int main()
{
    A a{};
    a.set(42);
    a.foo();
    a.copy_foo(53);
}
