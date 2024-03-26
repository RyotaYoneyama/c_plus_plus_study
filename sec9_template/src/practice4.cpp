#include <iostream>

struct Vector2d
{
    float x = 0;
    float y = 0;
};

struct Vector3d
{
    float x = 0;
    float y = 0;
    float z = 0;
};

template <typename Vector>
void show_vector(Vector vec)
{
    std::cout << "x:" << vec.x << std::endl;
    std::cout << "y:" << vec.y << std::endl;
    std::cout << "z:" << vec.z << std::endl;
}

template <>
void show_vector(Vector2d vec)
{
    std::cout << "x:" << vec.x << std::endl;
    std::cout << "y:" << vec.y << std::endl;
}

template <typename T>
class TestClass
{
public:
    explicit TestClass(T value) : value_(value) {}
    void printValue()
    {
        std::cout << "primary:"<< value_ << std::endl;
    }
private:
    T value_;
};

template <>
class TestClass<void>
{
public:
    void printValue()
    {
        std::cout << "explicit void" << std::endl;
    }
};

int main()
{
    Vector3d vec3d_test{1, 2, 3};
    Vector2d vec2d_test{4, 5};
    show_vector(vec3d_test);
    show_vector(vec2d_test);

    TestClass<int> primary{42};
    primary.printValue();
    TestClass<void> explict_specialized;
    explict_specialized.printValue();
}