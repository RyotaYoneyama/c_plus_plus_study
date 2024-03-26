#include <iostream>
#include <string>

void show(int &&v)
{
    std::cout << "v:" << v << std::endl;
}

class Person
{
private:
    std::string name_;
    unsigned int age_;

public:
    Person() : Person("", 0) {}
    Person(std::string name, uint8_t age) : name_(name), age_(age) {}
    Person(Person &other) : age_(other.age_), name_(other.name_) {}
    Person(Person &&other) : age_(other.age_), name_(other.name_) {}
    void show() { std::cout << age_ << name_ << std::endl; }
};

int main()
{
    Person a("a", 10);
    Person b(a);
    b.show();
    Person c(std::move(a));
    c.show();
}