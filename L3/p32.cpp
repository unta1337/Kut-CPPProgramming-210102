// Printing Fibonacci Sequence.
// Calculating Fibonacci Sequence: https://www.youtube.com/watch?v=yOyaJXpAYZQ&t

#include <iostream>

int main(void)
{
    int limit;
    std::cout << "Enter your upper limit: ";
    std::cin >> limit;

    int x = 0;
    int y = 1;
    int z;

    // Calculate Fibonacci Sequence.
    while (x <= limit)
    {
        std::cout << x << (y <= limit ? ", " : ".");
        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}