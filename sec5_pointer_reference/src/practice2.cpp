#include <iostream>
#include <string>
#include <vector>

class Product
{
private:
    int id_;
    std::string name_;
    int price_;

public:
    explicit Product(int id, std::string name, int price) : id_(id), name_(name), price_(price) {}
    Product() : Product(0, "", 0) {}
};

int main()
{
    Product parr[4] = {
        Product{1, "product1", 100},
        Product{2, "product2", 500},
    };

    std::vector<Product> pvec = {
        Product{1, "product1", 100},
        Product{2, "product2", 500},
    };
}