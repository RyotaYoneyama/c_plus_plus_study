#include <iostream>

class Base
{
public:
    virtual void foo(int i)
    {
        std::cout << "base:" << i << std::endl;
    }
};

template <typename T>
class Derived : public Base
{
public:
    void foo(T i) override
    {
        std::cout << "derived:" << i << std::endl;
    }
};

int main()
{
    Derived <int> di;
    di.foo(2);
    Base &bi = di;
    bi.foo(3);
    return 0;
}