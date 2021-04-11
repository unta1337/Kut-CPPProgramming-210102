// Random Numbers 1.

#include <iostream>
#include <cstdlib>
#include <ctime>

int rand_range(int lower, int upper)
{
    int interval = upper - lower + 1;
    return rand() % interval + lower;
}

int main(void)
{
    // Initialize random seed with time.
    srand((unsigned int)time(NULL));

    // Generate pseudo-random number between 1 and 6.
    // If number is not 1 through 6, break; this can check if the range is correctly applied.
    while (true)
    {
        int temp = rand_range(1, 6);
        if (!(1 <= temp && temp <= 6))
            break;
        std::cout << temp << std::endl;
    }

    return 0;
}