#include <iostream>

void show_with_while()
{
    int array[] = {4, 1, 4, 6, 7, 3};

    size_t length = sizeof(array) / sizeof(array[0]);
    int i = static_cast<int>(length);
    while (i--)
    {
        std::cout << "while array[i-1]:" << array[i] << std::endl;
    }
}

void show_with_do_while()
{
    int array[] = {4, 1, 4, 6, 7, 3};

    size_t length = sizeof(array) / sizeof(array[0]);
    int i = static_cast<int>(length);
    do
    {
        std::cout << "do while array[i-1]:" << array[i - 1] << std::endl;
    } while (--i);
}

void show_with_for()
{
    int array[] = {4, 1, 4, 6, 7, 3};

    size_t length = sizeof(array) / sizeof(array[0]);
    int i = static_cast<int>(length);
    for (; i > 0; i--)
    {
        std::cout << "for array[i-1]:" << array[i - 1] << std::endl;
    }
}

int main()
{
    show_with_while();
    show_with_do_while();
    show_with_for();
}