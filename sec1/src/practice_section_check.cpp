#include <iostream>

int main (){
    std::cout<<"hello, message"<<std::endl;

    char mojiretsu[] = {'a', 'b', 'c'};
    for(auto const moji:mojiretsu){
        std::cout<<moji<<std::endl;
    }
}