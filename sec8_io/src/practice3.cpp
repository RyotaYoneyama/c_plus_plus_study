#include <iostream>
int main()
{
    char buffer[1024];
    while (true)
    {
        std::cout << "> ";
        std::cin.getline(buffer, sizeof(buffer));
        if (buffer[0] == '\0')
        {
            // バッファーの先頭がヌル文字だった場合、空行となる
            break;
        }
        std::cout << "入力された行は \"" << buffer << "\" です" << std::endl;
    }
    
    std::cout << "終了" << std::endl;

    while (true)
    {
        std::cout << "> ";
        std::cin.get(buffer, sizeof(buffer));
        if (buffer[0] == '\0')
        {
            // バッファーの先頭がヌル文字だった場合、空行となる
            break;
        }
        std::cout << "入力された行は \"" << buffer << "\" です" << std::endl;
    }

    std::cout << "終了" << std::endl;
}