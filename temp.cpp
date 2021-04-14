#include <iostream>
#include <cmath>

#define ABS(x) (x) > 0 ? (x) : -(x)

int main(void)
{
    double value = 0.6117;
    double temp = 0;
    double error = 0.0001;

    std::cout.precision(24);

    int index = 1;
    while (ABS(value - temp) > error)
    {
        temp += 1 / pow(2, index);
        if (temp > value)
        {
            temp -= 1 / pow(2, index);
            std::cout << index << ", " << 0 << ", " << temp << "\n";
            index++;
            continue;
        }

        std::cout << index << ", " << 1 << ", " << temp << "\n";
        index++;
    }

    return 0;
}