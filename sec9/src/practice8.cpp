#include <iostream>
#include <vector>

template <typename T>
typename std::vector<T>::reference at(std::vector<T> &vec, std::size_t i)
{
    return vec[i];
}
template <typename T>
using vector_reference = typename std::vector<T>::reference;

template <typename T>
vector_reference<T> at2(std::vector<T> &vec, std::size_t i)
{
    return vec[i];
}

int main()
{
    std::vector<int> vec{1, 2, 3};
    std::vector<int>::reference ref = at(vec, 2);
    std::vector<int>::reference ref2 = at2(vec, 1);
    std::cout << "ref:" << ref << std::endl;
    std::cout << "ref2:" << ref2 << std::endl;
}