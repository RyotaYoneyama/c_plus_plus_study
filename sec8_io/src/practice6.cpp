#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out{"practice6.bin", std::ios::binary};
    out.put(1).put(2);
    out.close();

    std::ifstream in{"practice6.bin", std::ios::binary};
    char tmp;
    std::cout << in.get() << std::endl;

    const char message[] = "test, tete";
    std::ofstream out2{"practice6.bin", std::ios::binary | std::ios::trunc};
    out2.write(message, sizeof(message));
    out2.close();

    char buffer[1024];
    std::ifstream in2{"practice6.bin", std::ios::binary};
    in2.read(buffer, sizeof(message));
    for (unsigned int i = 0; i< in2.gcount(); i++)
    {
        if (message[i] != buffer[i])
        {
            std::cout << "不一致" << std::endl;
            break;
        }
        else
        {
            std::cout << message[i];
        }
    }
    std::cout << "終了" << std::endl;
}