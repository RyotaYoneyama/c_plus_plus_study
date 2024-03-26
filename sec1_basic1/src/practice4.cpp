#include <iostream>

void show_message(int value)
{

    if (value < 20 && value >= 10)
    {
        printf("10以上20未満\n");
    }
    else
    {
        printf("10以上20未満ではない\n");
    }
}

void switch_error_test()
{
    int a{2};
    switch (a + 1)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
        // case 3:
        //     printf("3\n");
        //     break;
        // default:
        // break;
    }
}

void if_test()
{
    int a{2};
    if (a + 1 == 1)
    {
        printf("if test 1\n");
    }
    else if (a + 1 == 2)
    {
        printf("if test 2\n");
    }
    else if (a + 1 == 3)
    {
        printf("if test 3\n");
    }
    else
    {
        printf("Other\n");
    }
}
int main()
{
    show_message(12);
    switch_error_test();
    if_test();
}