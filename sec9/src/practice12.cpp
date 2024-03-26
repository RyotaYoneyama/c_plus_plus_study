#include <iostream>
#include <typeinfo>

template <typename T>
class TestClass
{
public:
    explicit TestClass(T value) : value_(value){};
    void show_type() { std::cout << typeid(value_).name() << std::endl; }

private:
    T value_;
};

int main(){
    TestClass test{2.34};
    test.show_type();
}