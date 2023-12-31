#include <iostream>

class Base
{

public:
    std::string name() const;
    static std::string name_;
};

std::string Base::name_ = "";

std::string Base::name() const { return "Base"; }

class Derived : public Base
{
private:
    int value = 0;

public:
    std::string name(std::string name) const;
    using Base::name;
    friend void show_value(const Derived &d);
};
std::string Derived::name(std::string name) const
{
    name_ = name;
    return name_;
}

void show_value(const Derived &d)
{
    std::cout << d.value << std::endl;
}

int main()
{
    // Question 3
    Base b;
    std::cout << b.name() << std::endl;
    Derived d;
    std::cout << d.name("Derived") << std::endl;
    std::cout << d.name() << std::endl;

    // Question 4
    show_value(d);

    // Question 5
    std::cout << d.name("Derived 2") << std::endl;

}