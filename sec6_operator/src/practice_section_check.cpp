#include <iostream>
#include <memory>
class Integer
{
private:
    int val_;

public:
    explicit Integer(int val) : val_(val) { std::cout << "int constructor" << std::endl; }
    explicit Integer() : Integer(0) {}
    ~Integer(){std::cout << "int deconstructor" << std::endl;}
    Integer operator+(const Integer &other) { return Integer(val_ + other.val_); }
    Integer operator-(const Integer &other) { return Integer(val_ - other.val_); }
    Integer operator*(const Integer &other) { return Integer(val_ * other.val_); }
    Integer operator/(const Integer &other) { return Integer(val_ / other.val_); }
    void show() { std::cout << val_ << std::endl; }
};

class SmartInteger
{
    Integer *ptr_ = nullptr;

public:
    explicit SmartInteger(Integer *ptr) : ptr_(ptr) { std::cout << "smart constructor" << std::endl; }
    ~SmartInteger()
    {
        delete ptr_;
        std::cout << "smart deconstructor" << std::endl;
    }
    Integer &operator*() { return *ptr_; }
    Integer *operator->() { return ptr_; }
};

int main()
{

    SmartInteger x{ new Integer(3)};
    SmartInteger y{ new Integer};

    x->show();
    (*y).show();
    auto v = (*x) + (*y);
    v.show();
}