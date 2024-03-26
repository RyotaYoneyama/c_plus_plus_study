#include <iostream>

template <typename T>
class Vector3d
{
public:
    Vector3d(T value) : value_(value){};
    void print_value_in()
    {
        std::cout << "value:" << value_ << std::endl;
    }
    void print_value_out();

    template <typename U>
    void print_value_in2(U value) { std::cout << "val:" << value << std::endl; }

    template <typename U>
    void print_value_out2(U value);

private:
    T value_;
};

template <typename T>
void Vector3d<T>::print_value_out()
{
    std::cout << "value:" << value_ << std::endl;
}

template <typename T>
template <typename U>
void Vector3d<T>::print_value_out2(U value) { std::cout << "val:" << value << std::endl; }

int main()
{
    Vector3d test(3.0);
    test.print_value_in();
    test.print_value_out();
    test.print_value_in2("unko");
    test.print_value_out2("unko");
    return 0;
}