// Bank interest

#include <iostream>

void get_input(float *input, float rate)
{
    *input *= rate / 100;
}

int main(void)
{
    // Variables input.
    float loan, rate;
    std::cout << "Enter your loan principal and rate: ";
    std::cin >> loan >> rate;

    get_input(&loan, rate);
    std::cout << "Your loan interest is " << loan;

    return 0;
}