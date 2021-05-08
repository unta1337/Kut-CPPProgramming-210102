// Tax rating.

#include <iostream>

void add_tax(float *salary, float rate = 20.0f);

int main()
{
    // Initialize variables.
    float salary, rate;
    std::cout << "Enter your salary and tax rate (-1 for defalt tax rate; default tax rate: 20 %): ";   // -1 to determine the tax rate is entered or not.
    std::cin >> salary >> rate;

    std::cout << "Your salary: " << salary << "\n";
    if (rate == -1)
        add_tax(&salary);
    else
        add_tax(&salary, rate);
    std::cout << "After tax-ing: " << salary;

    return 0;
}

void add_tax(float *salary, float rate)
{
    *salary *= rate / 100 + 1;
}