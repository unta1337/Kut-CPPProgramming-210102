// Solving a quadratic equation.

#include <iostream>
#include <cmath>

int main(void)
{
    int a, b, c;

    loop:
    std::cout << "Quadratic Equation Form: ax^2 + bx + c = 0" << std::endl;
    input:
    std::cout << "Enter your a, b, and c (a b c): ";
    std::cin >> a >> b >> c;
    if (a == 0)
        goto input;

    // Calculating roots of the equation.
    float den = 2 * a;
    float sqr = b * b - 4 * a * c;
    bool complex = sqr > 0 ? (sqr = sqrt(sqr), false) : (sqr *= -1, sqr = sqrt(sqr), true);     // Detecting complex root.
    float real = -b / den;
    float img = sqr / den;

    if (!complex)
    {
        float x1 = real + img;
        float x2 = real - img;
        std::cout << "x1: " << x1 << std::endl;
        std::cout << "x2: " << x2 << std::endl << std::endl;
    }
    else
    {
        std::cout << "x1: " << real << " + " << img << "i" << std::endl;
        std::cout << "x2: " << real << " - " << img << "i" << std::endl << std::endl;
    }

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