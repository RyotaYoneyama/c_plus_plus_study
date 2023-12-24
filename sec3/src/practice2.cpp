#include <iostream>
#include <string>

class Person
{
public:
    Person();
    ~Person();
    void set(const int age, const std::string name);

private:
    int age_;
    std::string name_;
};

Person::Person() : age_(0), name_("empty")
{
    printf("constructor\n");
}

Person::~Person()
{
    printf("deconstructor\n");
}


void Person::set(const int age, const std::string name){
    age_ = age;
    name_ = name;
}

int main(){
    Person p;
    p.set(10, "taro");
    printf("end\n");
}