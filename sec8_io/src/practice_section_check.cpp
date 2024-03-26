#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    int value = 1234;
    std::cout << std::hex << std::left << std::setw(16) << std::setfill('=') << value << std::endl;

    char buffer[1024];
    std::cout << "<";
    std::cin.getline(buffer, sizeof(buffer));
    std::ofstream out{buffer};
    out << "test";
    out.close();

    std::ifstream in{buffer};
    std::string line;
    if (in.is_open())
    {
        while (!in.eof())
        {
            std::getline(in, line);
            std::cout << line << std::endl;
        }
    }

    std::ofstream outb{buffer, std::ios::binary};
    char message[100] = "test,test";
    outb.seekp(0, std::ios::end);
    outb.write(message, sizeof(message));
    outb.close();
}