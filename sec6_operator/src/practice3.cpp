
#include <iostream>

class Float
{
private:
    float val_;

public:
    Float(float val) : val_(val) {}
    Float operator+(const Float &rhs) const { return Float{this->val_ + rhs.val_}; }
    Float operator-(const Float &rhs) const { return Float{this->val_ - rhs.val_}; }
    Float operator*(const Float &rhs) const { return Float{this->val_ * rhs.val_}; }
    Float operator/(const Float &rhs) const { return Float{this->val_ / rhs.val_}; }
    Float operator+() const { return Float{val_}; }
    Float operator-() const { return Float{-val_}; }

    void show() const { std::cout << val_ << std::endl; }
};

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

    void show() const { std::cout << val_ << std::endl; }
};

int main()
{
    Float x{10.1f};
    Float y{3.0f};
    Float z{7.0f};

    auto v = x - y / y + x * z;
    v.show();

    auto w = -v;
    w.show();

    Integer a(3);
    a++;
    ++a;
    a.show();
}
