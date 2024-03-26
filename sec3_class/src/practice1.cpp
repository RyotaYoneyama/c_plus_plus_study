#include <iostream>

class A
{
public:
    void set(const int &value);
    int get() const;
    int& get();

private:
    int v;
};

void A::set(const int &value)
{
    v = value;
}

int A::get() const
{
    return v;
}
int& A::get() {
    return v;
}


int main()
{
    A a;
    a.set(42);
    const A &ca = a;
    std::cout << ca.get() << std::endl;
}