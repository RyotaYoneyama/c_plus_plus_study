#include <iostream>
#include <vector>

int test(int value) { return value; }
int (*point_func)(int) = test;

void filtered_show(std::vector<int> vec, bool (*filter)(int))
{
    for (const auto v : vec)
    {
        if (filter(v))
        {
            std::cout << v << std::endl;
        }
    }
}

bool is_even(int val)
{
    return val % 2 == 0;
}

int main()
{
    std::cout << test(4) << std::endl;
    std::vector<int> vec = {1, 2, 3, 4};
    filtered_show(vec, &is_even);
}