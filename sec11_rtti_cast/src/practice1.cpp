#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
};

void determine_class(const Base& obj){
    const std::type_info & obj_type = typeid(obj);
    if(obj_type==typeid(Derived)){
        std::cout<<"The type of obj is the one of Derived."<<std::endl;
    }
    else{
        std::cout<<"The type of obj is not the one of Derived."<<std::endl;
    }
}
int main()
{
    // Q1
    auto func1 = []()
    { std::cout << "func1" << std::endl; };
    auto func2 = []()
    { std::cout << "func2" << std::endl; };

    if (typeid(func1) != typeid(func2))
    {
        std::cout << "The id of func1 is different from one of func2." << std::endl;
    }

    // Q2
    Base b;
    Derived d;
    determine_class(b);    
    determine_class(d);    

    return 0;
}