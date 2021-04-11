// Filtering right angle triangles. (Which hold Pythagorean theorem.)

#include <iostream>

int main(void)
{
    // Apply Pythagorean theorem.
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            for (int k = 1; k <= 100; k++)
            {
                if (i * i + j * j == k * k)
                    std::cout << "Right triangle (adjacent, opposite, hypotenuse): " << i << ", " << j << ", " << k << ".\n";
            }
        }
    }

    return 0;
}