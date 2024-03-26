#include <iostream>

int main(){
    auto lambda = [](const auto &value){
        std::cout<<"value:"<<value<<std::endl;
    };
    lambda(32);
    lambda("test");
}