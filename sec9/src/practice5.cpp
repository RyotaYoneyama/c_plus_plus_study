#include <iostream>

template <typename A>
auto getA(A a) { return a; }

template <typename T>
class Test{
public:
    void method(){
        std::cout<<"Test<T> method"<<std::endl;
    }
};

template <typename T>
void show_method(Test<T> test){
    test.method();
}

int main()
{
    auto a = getA<int>(3);
    std::cout << a << std::endl;
    Test<int> test;
    show_method(test);

    return 0;
}