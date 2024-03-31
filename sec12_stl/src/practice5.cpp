#include <iostream>
#include <set>
#include <map>

int main()
{
    std::set set_1 = {1, 2, 3, 3, 4};

    for (auto &s : set_1)
    {
        std::cout << s << std::endl;
    }

    std::map map_1 = {
        std::pair{"taro", 19},
        std::pair{"kanako", 99},
    };

    for (const auto &[key, value] : map_1)
    {
        std::cout << key << ":" << value << std::endl;
    }

    return 0;
}