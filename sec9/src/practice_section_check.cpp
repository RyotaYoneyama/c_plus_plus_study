#include <iostream>

template <typename Q1>
class Q1Class
{
public:
    explicit Q1Class(Q1 q1) : q1_(q1) {}
    template <typename Q2>
    void show(Q2 q2);

private:
    Q1 q1_;
};

template <typename Q1>
template <typename Q2>
void Q1Class<Q1>::show(Q2 q2)
{
    std::cout << "question 1" << std::endl;
}

template <typename Q2a, typename Q2b, typename Q2c>
class Q2Class
{
public:
    explicit Q2Class(Q2a q2a, Q2b q2b, Q2c q2c) : q2a_(q2a), q2b_(q2b), q2c_(q2c) {}
    void show()
    {
        std::cout << q2a_ << std::endl;
        std::cout << q2b_ << std::endl;
        std::cout << q2c_ << std::endl;
    }

private:
    Q2a q2a_;
    Q2b q2b_;
    Q2c q2c_;
};

template <typename Q2a, typename Q2c>
class Q2Class<Q2a, void, Q2c>
{
public:
    explicit Q2Class(Q2a q2a, int q2b, Q2c q2c) : q2a_(q2a), q2b_(q2b), q2c_(q2c) {}
    void show()
    {
        std::cout << q2a_ << std::endl;
        std::cout << q2c_ << std::endl;
    }

private:
    Q2a q2a_;
    int q2b_;
    Q2c q2c_;
};

template <typename...T3>
void func31(T3...args){
    std::cout<<"テンプレートパラメータパック数："<<sizeof...(T3)<<std::endl;
    std::cout<<"関数パラメータパック数："<<sizeof...(args)<<std::endl;    
}

template <typename...T3>
void func32(T3...args){
    func31(std::forward<T3>(args)...);
}

template <typename T>
void func4(T value){
    static_assert(std::is_integral<T>::value, "func4 template is only integral");
}

int main()
{
    Q1Class q1class{1};
    q1class.show(2);
    Q2Class q21(4, 323.33, "three");
    q21.show();
    Q2Class q22(4, static_cast<int>(323.33), "three");
    q22.show();
    func32(1,2,3);
    func4(3);
    // func4(3.1); //compile error
    return 0;
}