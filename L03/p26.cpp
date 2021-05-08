// Finding prime numbers between 2 and 100.

#include <iostream>

int main(void)
{
    // Store numbers between 2 and 100.
    int numbers[99] = {0};
    for (int i = 0; i < 99; i++)
        numbers[i] = i + 2;

    // Filter non-prime numbers via Sieve of Eratosthenes.
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j * i <= 100; j++)
            numbers[j * i - 2] = 0;
    }

    int index = 1;
    for (int i = 0; i < 99; i++)
    {
        if (numbers[i])
            std::cout << "Prime number No. " << index++ << ":\t" << numbers[i] << std::endl;
    }

    return 0;
}