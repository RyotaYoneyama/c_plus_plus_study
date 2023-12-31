#include <iostream>

class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0;
};

std::string Base::name() const { return "Base"; }

class Derived : public Base
{
public:
    std::string name() const override;
    virtual std::string most_name() const;
};
std::string Derived::name() const { return "Derivied"; }
std::string Derived::most_name() const  { return "Most Derivied"; }

class MoreDerived : public Derived
{
public:
    std::string name() const override;
};
std::string MoreDerived::name() const { return "More Derivied"; }

int main()
{
    // Base b;
    Derived d;
    MoreDerived m;
    // std::cout << b.name() << std::endl;
    std::cout << d.name() << std::endl;
    std::cout << m.name() << std::endl;
    std::cout << m.most_name() << std::endl;
}