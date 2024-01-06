#include <iostream>
#include <memory>


class A
{
private:
public:
    A() { std::cout << "constructor" << std::endl; }
    ~A() { std::cout << "deconstructor" << std::endl; }
};

int main(){
    auto a = std::make_unique<A>();
    std::unique_ptr<A> b;
    b = std::make_unique<A>();
}