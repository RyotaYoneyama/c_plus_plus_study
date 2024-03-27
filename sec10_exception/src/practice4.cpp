#include <iostream>
#include <exception>

class MyException: public std::exception
{
public:
    explicit MyException(const char *msg) : msg_(msg) {}
    const char *what() const noexcept override;

private:
    const char *msg_;
};

const char *MyException::what() const noexcept
{
    return msg_;
}

int main()
{
    try
    {
        throw MyException{"My Exception."};
    }
    catch (MyException &e)
    {
        std::cout << e.what() << std::endl;
    }
}