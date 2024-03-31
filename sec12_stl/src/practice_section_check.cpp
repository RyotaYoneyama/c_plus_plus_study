#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

int main()
{
    std::vector<int> vec{1, 2, 3, 1, 4};

    vec.erase(vec.begin() + 2);
    for (auto v : vec)
    {
        std::cout << v << std::endl;
    }

    std::tuple person1{"name", 164, 72};

    auto [name, height, weight] = person1;

    auto c = std::count(vec.begin(), vec.end(), *vec.begin());
    std::cout << c << std::endl;

    return 0;
}