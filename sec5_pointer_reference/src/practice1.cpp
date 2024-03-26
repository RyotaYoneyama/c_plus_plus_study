#include <iostream>

bool reverse(int *array, uint16_t length)
{
    if (length <= 0)
    {
        return false;
    }

    for (int i = 0; i < length / 2; i++)
    {
        int tmp = array[i];
        array[i] = array[length - i - 1];
        array[length - i- 1] = tmp;
    }

    return true;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    u_int16_t length = sizeof(array)/sizeof(int);
    if (reverse(array, length))
    {
        for (auto &arr : array)
        {
            std::cout << arr << std::endl;
        }
    }
}
