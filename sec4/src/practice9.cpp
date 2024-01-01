#include <iostream>

void hello(){std::cout<<"hello"<<std::endl;}
void goodbye(){std::cout<<"goodbye"<<std::endl;}


int main(){
    hello();
    goodbye();
    #define hello goodbye
    hello();
    #undef hello
    hello();
}