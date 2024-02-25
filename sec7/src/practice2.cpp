#include <iostream>

class Base{
private:
    int val_;
public:
    Base(int val):val_{val}{std::cout<<"Base constructor"<<std::endl;}
    ~Base(){std::cout<<"Base deconstructor"<<std::endl;}
};


class Derived: public Base{
public:
    Derived(int val):Base{val}{std::cout<<"Derived constructor"<<std::endl;}
    ~Derived(){std::cout<<"Derived deconstructor"<<std::endl;}

};


int main(){
    Derived(5);
}