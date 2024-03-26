#include <iostream>
#include <string>

void do_while_getline()
{

    std::string s;
    do
    {
        std::cout << "Type something here, you can stop thi loop with enter:" << std::endl;
        std::getline(std::cin, s);
        std::cout << "what you typed was:" << s << std::endl;

    } while (s != "");
}
int main()
{
    std::string s;

    std::cout << "Type something here:" << std::endl;
    std::cin >> s;
    std::cout << "what you typed was:" << s << std::endl;

    std::cout << "Type something here:" << std::endl;
    std::getline(std::cin, s);
    std::cout << "what you typed was:" << s << std::endl;

    do_while_getline();
}