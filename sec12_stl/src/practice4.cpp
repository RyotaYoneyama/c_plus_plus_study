#include <iostream>
#include <tuple>

int main()
{
    std::pair p1{"Name", 175};
    std::tuple p2{"Name", 175, 65};

    auto &[name, height, weight] = p2;
    std::cout << name << "," << height << "," << weight << std::endl;
    
    return 0;
}