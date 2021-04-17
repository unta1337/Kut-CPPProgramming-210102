// Volume of a cylinder.

#include <iostream>

#define PI 3.131592

float cylinder(float r, float h = 1.0f)
{
    return PI * r * r * h;
}

int main(void)
{
    // Initialize variables.
    float r, h;
    std::cout << "Enter your radius and height (-1 for defalt height; default height: 1): ";   // -1 to determine the tax rate is entered or not.
    std::cin >> r >> h;

    float v;
    std::cout << "Your radius: " << r << "\n";
    if (h == -1)
        v = cylinder(r);
    else
        v = cylinder(r, h);
    std::cout << "The Volume of the cylinder is: " << v;

    return 0;
}