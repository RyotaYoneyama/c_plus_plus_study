#include <iostream>

class Product
{
public:
    Product()
    {
        std::cout << "Constructor" << std::endl;
    }
    ~Product()
    {
        std::cout << "Deconstructor" << std::endl;
    }
};

int main()
{
    {
        Product *pp = new Product{};
        std::cout << "content" << std::endl;
        delete pp;
    }
}