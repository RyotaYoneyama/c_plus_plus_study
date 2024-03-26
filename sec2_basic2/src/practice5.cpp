#include <iostream>

class VeryLongNameClassBraBra
{

private:
    int value_;

public:
    using integer = int;
    integer get_num() const noexcept;
    void set_num(integer num) noexcept;
};

using ShortBra = VeryLongNameClassBraBra;

ShortBra::integer ShortBra::get_num() const noexcept
{
    return value_;
}

void ShortBra::set_num(integer num) noexcept
{
    value_ = num;
}

int main()
{
    using ShortBra = VeryLongNameClassBraBra;
    ShortBra bra;
    bra.set_num(54);
    ShortBra::integer num = bra.get_num();
    std::cout << num << std::endl;
}