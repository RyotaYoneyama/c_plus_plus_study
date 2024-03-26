#include <iostream>

int getCounter(){
    static unsigned int counter = 0;
    return counter++;
}

int main(){
    for(unsigned int i =0; i<10; i++){
        std::cout<<"counter:"<<getCounter()<<std::endl;
    }
}
