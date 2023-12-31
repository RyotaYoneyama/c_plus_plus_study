#include <iostream>

class Test
{
public:
    int val=-1;
    void show_val(int val);
    void show_this_val(int val);
};

void Test::show_val(int val){
    std::cout<<"val:"<<val<<std::endl;
}


void Test::show_this_val(int val){
    std::cout<<"val:"<<this->val<<std::endl;
}


int main(){
    Test t;
    t.show_val(3);
    t.show_this_val(3);
}