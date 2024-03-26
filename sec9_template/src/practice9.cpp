#include <iostream>

template <typename...T>
void count_args(T...args){
    std::cout<<"テンプレートパラメータパック数："<<sizeof...(T)<<std::endl;
    std::cout<<"関数パラメータパック数："<<sizeof...(args)<<std::endl;
}

int main(){
    count_args(2,3);
    count_args(1,2,3);
    return 0;
}
