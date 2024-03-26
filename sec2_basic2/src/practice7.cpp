#include <iostream>

struct vector2d
{
    float x, y;
};

void show_value(const int &v) noexcept
{
    std::cout << v << std::endl;
}

void show_value(const vector2d &v) noexcept
{
    std::cout << v.x << std::endl;
    std::cout << v.y << std::endl;
}

int sum(const int &a, const int &b, const int &c, const int &d) noexcept
{
    return a + b + c + d;
}

int sub(const int &a, const int &b) noexcept
{
    return a - b;
}

vector2d sub(const vector2d &a, const vector2d &b) noexcept
{
    vector2d res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    return res;
}

int main()
{
    show_value(sum(1, 2, 3, 4));
    show_value(sub(3, 2));
    vector2d a{2.3, 3.2};
    vector2d b{1.2, 4.0};
    show_value(sub(a, b));
}