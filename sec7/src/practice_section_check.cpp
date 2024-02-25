#include <iostream>


class Base
{
private:
public:
    void virtual funcPublic(){};
};

class Derived : public Base
{
public:
    void funcPublic() override final
    {
        std::cout << "derived public" << std::endl;
    }
};

int main()
{
    Derived d;
    Base &base = d;
    base.funcPublic(); 
}