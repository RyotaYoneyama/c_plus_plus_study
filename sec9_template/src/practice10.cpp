#include <iostream>
#include <type_traits>

template <typename T>
class Vector2D
{
public:
    explicit Vector2D(T x, T y) : x_(x), y_(y)
    {
        static_assert(std::is_signed<T>::value, "Template should be signed value.");
    }

private:
    T x_;
    T y_;
};

int main()
{
    Vector2D<int> v1(3, 4);
    // Vector2D<unsigned int> v2(3, 4);
}