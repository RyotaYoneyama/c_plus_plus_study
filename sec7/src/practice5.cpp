#include <iostream>

class BaseA
{
public:
    BaseA() { std::cout << "BaseA constructor" << std::endl; }
    ~BaseA() { std::cout << "BaseA deconstructor" << std::endl; }
    void funcA() { std::cout << "funcA" << std::endl; }
};

class BaseB
{
public:
    BaseB() { std::cout << "BaseB constructor" << std::endl; }
    ~BaseB() { std::cout << "BaseB deconstructor" << std::endl; }
    void funcB() { std::cout << "funcB" << std::endl; }

};

class Derived : public BaseA, public BaseB
{
public:
    Derived() : BaseA(), BaseB() { std::cout << "Derived constructor" << std::endl;}
    ~Derived() { std::cout << "Derived deconstructor" << std::endl;}
};

int main()
{
    Derived d;
    d.funcA();
    d.funcB();
}