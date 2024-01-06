
#include <iostream>
#include <vector>

class Float
{
private:
    float val_;

public:
    Float(float val) : val_(val) {}
    Float operator+(const Float &rhs) const;
    Float operator-(const Float &rhs) const;
    Float operator*(const Float &rhs) const;
    Float operator/(const Float &rhs) const;
    void show() const { std::cout << val_ << std::endl; }
};

Float Float::operator+(const Float &rhs) const
{
    return Float{this->val_ + rhs.val_};
}

Float Float::operator-(const Float &rhs) const
{
    return Float{this->val_ - rhs.val_};
}

Float Float::operator*(const Float &rhs) const
{
    return Float{this->val_ * rhs.val_};
}

Float Float::operator/(const Float &rhs) const
{
    return Float{this->val_ / rhs.val_};
}

int main()
{
    Float x{10.1f};
    Float y{3.0f};
    Float z{7.0f};
    std::vector<Float> float_vec;
    float_vec.push_back(x + y);
    float_vec.push_back(y + x);
    float_vec.push_back(y / x);
    float_vec.push_back(y * x);
    float_vec.push_back(x * y);
    float_vec.push_back(x - y);
    float_vec.push_back(y - x);
    for(auto const &v: float_vec){
        v.show();
    }

}
