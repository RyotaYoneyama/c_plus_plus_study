#include <iostream>

void print_even_num(const int num)
{
    if (num % 2 == 1)
    {
        throw std::runtime_error("The input of print_even_num should be even but not odd.");
    }
    std::cout << "num:" << num << std::endl;
}

int main()
{
    print_even_num(4);
    // print_even_num(3); // Emergent stop

    try
    {
        print_even_num(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}