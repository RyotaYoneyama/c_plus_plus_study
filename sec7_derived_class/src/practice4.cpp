#include <iostream>

class Base
{
private:
    void virtual funcPrivate() { std::cout << "base private" << std::endl; }

public:
    void virtual funcPublic()
    {
        std::cout << "base public" << std::endl;
        funcPrivate();
    }
    virtual ~Base() { std::cout << "base deconstructor" << std::endl; }
};

class Derived : public Base
{
private:
    void funcPrivate() override { std::cout << "derived private" << std::endl; }

public:
    void funcPublic() override
    {
        std::cout << "derived public" << std::endl;
        funcPrivate();
    }
    ~Derived() override { std::cout << "derived deconstructor" << std::endl; }
};

int main()
{
    Derived derived;
    Base &base = derived;
    base.funcPublic();

    Base *base2 = new Derived{};
    delete base2;
}