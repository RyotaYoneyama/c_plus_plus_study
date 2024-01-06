#include <iostream>

class A
{
public:
    void foo() const { std::cout << "call A" << std::endl; 
    }
};

class B
{
    A a;

public:
    operator const A &() { return a; }
};

int main()
{
    B b;
    static_cast<const A&>(b).foo();
}