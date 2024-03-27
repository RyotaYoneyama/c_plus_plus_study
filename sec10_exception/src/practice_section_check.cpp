#include <iostream>
#include <exception>

void throw_error()
{
    throw std::runtime_error("q1 error");
}

class Q2Class
{
public:
    Q2Class(int i) : i_(i)
    {   std::cout << "Constructor." <<i_<< std::endl;
        if (i_ < 0)
        {
            throw std::runtime_error("q2 error.");
        }
    }
    ~Q2Class() { std::cout << "Deconstructor." <<i_<< std::endl; }

private:
    int i_;
};

int main()
{

    std::cout << "Q1" << std::endl;
    try
    {
        std::cout << "Before throw error" << std::endl;
        throw_error();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "After throw error" << std::endl;

    std::cout << "Q2" << std::endl;
    try
    {
        Q2Class *ptr = new Q2Class[]{Q2Class{1}, Q2Class{-1}, Q2Class{3}};
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}