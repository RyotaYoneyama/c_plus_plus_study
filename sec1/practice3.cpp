#include <iostream>

int main()
{
    int i{0}, i_{0};

    i *= 2 + 4;
    i %= 3;

    i_ = i_ * (2 + 4);
    i_ = i_ % 3;

    printf("i: %d, i_: %d", i, i_);
}