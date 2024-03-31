#include <iostream>
#include <vector>


// The type of iterator of vector is random iterator.
int main()
{
    std::vector<int> q1_vec{1, 2, 3, 4, 5};
    q1_vec.push_back(6);

    for (auto &v : q1_vec)
    {
        std::cout << v << std::endl;
    }

    return 0;
}