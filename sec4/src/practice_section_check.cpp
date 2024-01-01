#include "practice_section_check.hpp"

namespace level_1 :: level_2
{
    void show()
    {
        std::cout << "level2" << std::endl;
    }
}
int main()
{
    std::cout<<getNext(3)<<std::endl;
    namespace level2 = level_1::level_2;
    level2::show();
}