#include <iostream>

void feature() { std::cout << "global" << std::endl; }

namespace module_a::sub_a
{
    void feature() { std::cout << "module_a" << std::endl; }
}

int main()
{
    std::cout<<"Normal global"<<std::endl;
    feature();
    std::cout<<"Normal nested function"<<std::endl;
    module_a::sub_a::feature();

    {
        std::cout<<"using directive"<<std::endl;
        using namespace module_a;
        sub_a::feature();
    }
    
    {
        std::cout<<"using declaration"<<std::endl;
        using module_a::sub_a::feature;
        feature();
        std::cout<<"global scope"<<std::endl;
        ::feature();
    }

    {
        std::cout<<"Rename nest"<<std::endl;
        namespace sub = module_a::sub_a;
        sub::feature();
    }

}