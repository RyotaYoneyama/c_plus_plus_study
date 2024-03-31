#include <iostream>
#include <algorithm>

int main()
{

    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5, 6};
    std::sort(v1.begin(), v1.end(), [](int v1, int v2){return v1>v2;});

    std::copy(v1.begin(), v1.end(), std::inserter(v2, v2.begin()));

    for (const auto &v : v2)
    {
        std::cout << v << std::endl;
    }

    return 0;
}