#include <iostream>
#pragma once 

class Product
{
private:
    unsigned int price_;

public:
    Product(unsigned int price) : price_(price){};
    unsigned int getPrice() const { return price_; };
    void setPrice(const unsigned int price) { price_ = price; };
};

inline void show_uint_value(const unsigned int value)
{
    std::cout << "value:" << value << std::endl;
}