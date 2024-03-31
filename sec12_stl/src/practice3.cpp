#include <iostream>
#include <list>

// The type of iterator of list is bidirectional iterator

int main()
{
    std::list<int> q2_list{1, 2, 3};
    auto iter = q2_list.begin();
    std::advance(iter, 2);
    iter = std::prev(iter);
    std::cout << *iter << std::endl;

    for (auto &l : q2_list)
    {
        std::cout << l << std::endl;
    }
    q2_list.push_front(21);
    q2_list.sort([](int v1, int v2)
                 { return v1 > v2; });

    for (auto &l : q2_list)
    {
        std::cout << l << std::endl;
    }

}