#include <iostream>
class A
{
    int value_;

public:
    A(int value) : value_(value) {}
    void operator()() { value_++; }
    void operator()(int value) { value_ += value; }
    void show() const{ std::cout << value_ << std::endl; }
};

int main(){
    A a(3);
    a();
    a(-2);
    a.show();
}