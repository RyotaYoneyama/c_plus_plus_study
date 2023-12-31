#include <iostream>

class TestStatic
{
private:
    static uint16_t counter_;

public:
    TestStatic();
    static void show_counter();
};

uint16_t TestStatic::counter_ = 0;

TestStatic::TestStatic() { counter_++; }

void TestStatic::show_counter()
{
    std::cout << "counter:" << counter_ << std::endl;
}

int main(){
    TestStatic::show_counter();
    TestStatic t;
    t.show_counter();
}
