
#include <iostream>

class Integer
{
private:
    int val_;

public:
    Integer(int val) : val_(val) {}
    bool operator<(const Integer &rhs) const { return val_ < rhs.val_; }
    bool operator<=(const Integer &rhs) { return !(rhs < *this); }
    bool operator>(const Integer &rhs) { return rhs < *this; }
    bool operator>=(const Integer &rhs) { return !(*this < rhs); }
    bool operator==(const Integer &rhs) { return (*this < rhs) && (rhs < *this); }
    bool operator!=(const Integer &rhs) { return (*this < rhs) || (rhs < *this); }
    void show() const { std::cout << val_ << std::endl; }
};

int main()
{
    Integer a{1};
    Integer b{2};
    std::cout << (a < b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
}
