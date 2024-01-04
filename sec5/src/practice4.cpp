#include <iostream>

class Product
{
private:
    int price_;

public:
    Product()
    {
        std::cout << "Constructor1" << std::endl;
    }
    Product(int price) : price_(price)
    {
        std::cout << "Constructor2" << std::endl;
    }
    ~Product()
    {
        std::cout << "Deconstructor" << std::endl;
    }
    int getPrice() const { return price_; }
};

int main()
{

    Product *pp_single = new Product{};
    delete pp_single;

    Product *pp_arr = new Product[3]{
        Product(),
        Product(100),
    };
    for (int i =0; i<3;i++)
    {
        std::cout << pp_arr[i].getPrice() << std::endl;
    }

    delete[] pp_arr;
}