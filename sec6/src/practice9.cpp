
#include <iostream>

class Float
{
private:
    float val_;

public:
    Float(float val) : val_(val) {}
    friend Float operator+(const Float &rhs, const float val);
    friend Float operator+(const float val, const Float &rhs);
    void show() const { std::cout << val_ << std::endl; }
};

Float operator+(const Float &rhs, const float val)
{
    return Float{rhs.val_ + val};
}

Float operator+(const float val, const Float &rhs)
{
    return Float{val + rhs.val_};
}

int main()
{
    Float x{10.1f};
    auto v1 = x + 10.2f;
    auto v2 = 10.2f + x;
    v1.show();
    v2.show();
}
