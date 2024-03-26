#include <iostream>

class A
{
private:
    int value_;

public:
    int &getValue()  { return value_; }
    const int &getValue() const { return value_; }
    void setValue(const int &value) { value_ = value; }
};
int main()
{
    A a{};
    a.setValue(4);
    int &v = a.getValue();
    std::cout << v << std::endl;
}