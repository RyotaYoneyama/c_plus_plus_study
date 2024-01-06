
#include <iostream>

class Float
{
private:
    float val_;

public:
    Float(float val) : val_(val) {}
    Float operator=(const Float &rhs)
    {
        this->val_ = rhs.val_;
        return *this;
    }
    void show() const { std::cout << val_ << std::endl; }
};

int main()
{
    Float x{10.1f};
    auto y = x;
    y.show();
}
