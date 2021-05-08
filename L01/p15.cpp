// Calculating the Area and Volume of a sphere.

#include <iostream>

// Define PI as constant.
#define PI 3.14159265359

int main(void)
{
    // Declare variables only once.
    float r;

    loop:
    std::cout << "Enter your radius: ";
    std::cin >> r;

    // Calculate and print A and V.
    std::cout << "A: " << 4 * PI * r * r << std::endl;
    std::cout << "V: " << (4.0f / 3) * PI * r * r * r << std::endl << std::endl;

    // Continue Loop Menu.
    loopMenu:
    char tmp;
    std::cout << "Continue? (Y/N): ";
    std::cin >> tmp;

    switch (tmp)
    {
        case 'Y':
        case 'y':
            std::cout << std::endl;
            goto loop;
        case 'N':
        case 'n':
            goto end;
        default:
            goto loopMenu;
    }

    end:
    return 0;
}