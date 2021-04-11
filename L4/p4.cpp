// Euclidean distance.

#include <iostream>
#include <cmath>

// Take float variables to deal with real values.
float dist_2D(float x1, float y1, float x2, float y2)
{
    float dx = x1 - x2;
    float dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main(void)
{
    while (true)
    {
        float x1, x2, y1, y2;
        std::cout << "Enter your points. (x1 y1 x2 y2): ";
        std::cin >> x1 >> y1 >> x2 >> y2;

        std::cout << "Distans between point 1 and point 2 is " << dist_2D(x1, y1, x2, y2) << "\n\n";
    }

    return 0;
}