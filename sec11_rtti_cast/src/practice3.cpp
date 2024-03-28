#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() {}
    void printClassName() { std::cout << "Base" << std::endl; }
};

class Derived : public Base
{
public:
    void printClassName() { std::cout << "Derived" << std::endl; }
};

class MoreDerived : public Derived
{
public:
    void printClassName() { std::cout << "Derived" << std::endl; }
};

template <typename base_t, typename derived_t>
void pointer_downcast(base_t *base_ptr, derived_t *derived_ptr)
{
    derived_ptr = dynamic_cast<derived_t *>(base_ptr);

    if (derived_ptr)
    {
        std::cout << "cast success" << std::endl;
    }
    else
    {
        std::cout << "cast fail" << std::endl;
    }
}

template <typename base_t, typename derived_t>
void ref_downcast(base_t &base_ref, derived_t &derived_ref)
{
    try
    {
        derived_ref = dynamic_cast<derived_t &>(base_ref);
        std::cout << "cast success" << std::endl;
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "cast fail" << std::endl;
    }
}

int main()
{
    // Q1
    Derived d;
    Base *b_ptr = &d;
    Derived *d_ptr = static_cast<Derived *>(b_ptr);

    // Q2
    Derived *d_ptr2;
    pointer_downcast(b_ptr, d_ptr2); // success

    Base &b = d;
    Derived d2;
    ref_downcast(b, d2); // success


    MoreDerived *md_ptr;
    pointer_downcast(d_ptr, md_ptr); // fail
    MoreDerived md;
    ref_downcast(d2, md); // fail

    return 0;
}