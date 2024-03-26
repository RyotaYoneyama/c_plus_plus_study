#include <iostream>


int main()
{
    int i{0};
    int &j = i;
    j = 42;
    printf("i: %d\n", i);

    const int k = 42;
    const int &l = k;
    

}
