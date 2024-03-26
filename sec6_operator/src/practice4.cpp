
#include <iostream>

class Integer
{
private:
    int val_;

public:
    Integer(int val) : val_(val) {}
    Integer &operator++()
    {
        ++val_;
        return *this;
    }
    Integer &operator--()
    {
        --val_;
        return *this;
    }
    Integer operator++(int)
    {
        auto tmp = *this;
        ++*this;
        return tmp;
    }
    Integer operator--(int)
    {
        auto tmp = *this;
        --*this;
        return tmp;
    }

    Integer operator|(const Integer &rhs) const { return val_ | rhs.val_; }
    Integer operator&(const Integer &rhs) const { return val_ & rhs.val_; }
    Integer operator^(const Integer &rhs) const { return val_ ^ rhs.val_; }
    Integer operator~() const { return ~val_; }
    void show() const { std::cout << val_ << std::endl; }
};

int main()
{

    Integer b = 0b0011;
    Integer c = 0b1100;
    auto d = b | c;
    auto e = b & c;
    auto f = b ^ c;
    auto g = ~d;
    b.show();
    c.show();
    d.show();
    e.show();
    f.show();
    g.show();
}
