#include <iostream>
#include <utility>

void show_value(int &value) { std::cout << "left ref:" << value << std::endl; }
void show_value(int &&value) { std::cout << "right ref:" << value << std::endl; }

template <typename T>
void q1(const T &value) { std::cout << "const ref:" << value << std::endl; }

template <typename T>
void q2_fw_ref(T &&value) { show_value(value); }

template <typename T>
void q3_fw_ref(T &&value) { show_value(std::forward<T>(value)); }

int main()
{
    const int i_c = 5;
    int i = 5;
    q1(i_c);
    q2_fw_ref(3);
    q2_fw_ref(i);
    q3_fw_ref(3);
    q3_fw_ref(i);    
}