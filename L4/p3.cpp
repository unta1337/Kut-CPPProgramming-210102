// Exponents calculator.

#include <iostream>

// Multiply temp by n k times; returns 2 if k equals to 0.
int ipower(int n, int k)
{
    int temp = 1;
    for (int i = 0; i < k; i++)
        temp *= n;
    return temp;
}

int main(void)
{
    // Indent using '\t'.
    std::cout << "\t";
    for (int i = 0; i <= 10; i++)
        std::cout << "k = " << i << "\t";
    std::cout << "\n";

    std::cout << "3^k\t";
    for (int k = 0; k <= 10; k++)
        std::cout << ipower(3, k) << "\t";
    std::cout << "\n";

    return 0;
}