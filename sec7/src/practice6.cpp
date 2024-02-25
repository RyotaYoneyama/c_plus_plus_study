#include <iostream>

class Base
{
    int val_;

public:
    Base(int i) : val_(i) { std::cout << "Base constructor" << std::endl; }
    ~Base() { std::cout << "Base deconstructor" << std::endl; }
    void show() { std::cout << val_ << std::endl; }
};

class DerivedA : public virtual Base
{
public:
    DerivedA() : Base(1) { std::cout << "DerivedA constructor" << std::endl; }
    ~DerivedA() { std::cout << "DerivedA deconstructor" << std::endl; }
};

class DerivedB : public virtual Base
{
public:
    DerivedB() : Base(2) { std::cout << "DerivedB constructor" << std::endl; }
    ~DerivedB() { std::cout << "DerivedB deconstructor" << std::endl; }
};

class MoreDerived : public DerivedA, public DerivedB
{
public:
    MoreDerived() : Base(3) { std::cout << "MoreDerived constructor" << std::endl; }
    ~MoreDerived() { std::cout << "MoreDerived deconstructor" << std::endl; }
};

int main()
{
    MoreDerived md;
    md.show();
}