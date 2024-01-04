#include <iostream>

int *allocate(unsigned int n)
{
    int *pt = new int[n]{23};
    return pt;
}

void clear_zero(int &value) { value = 0; }
void show1(int &value) { std::cout << value << std::endl; }
void show2(int &&value) { std::cout << value << std::endl; }

void enumerate(int *first, int *last, void (*action)(int))
{
    for (;first != last;first++)
    {
        action(*first);
    }
}

int main()
{
    int *pt = allocate(5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << pt[i] << std::endl;
    }
    int value = 10;
    std::cout << value << std::endl;
    clear_zero(value);
    std::cout << value << std::endl;
    show1(value);
    show2(std::move(value));

    int array[] = {1, 2, 3, 5, 7, 11, 13};
    std::size_t length = sizeof(array) / sizeof(array[0]);

    auto show3 = [](int value)
    {
        std::cout << value << std::endl;
    }; 
    
    enumerate(array, array + length, show3);
}