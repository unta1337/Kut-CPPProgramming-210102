#include <iostream>

void test(int i = 50)
{
    std::cout << i;
}

int main(void)
{
    test();

    return 0;
}