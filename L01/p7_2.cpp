// Convert feet inches to cm.
// Converting Constants: https://www.sfei.org/it/gis/map-interpretation/conversion-constants

#include <iostream>

int main(void)
{
    // Converting constants.
    const float feetToCm = 30.48f;
    const float inchToCm = 2.54f;

    // Declare variables only once.
    float inch, cm;
    int feet;
    while (true)
    {
        loop:
        std::cout << "Enter your height (feet): ";
        std::cin >> feet;
        std::cout << "Enter your height (inch): ";
        std::cin >> inch;

        // Converting feet inches to cm.
        cm = feet * feetToCm +inch * inchToCm;

        std::cout << feet << " feet " << inch << " inch is " << cm << " cm." << std::endl << std::endl;

        // Continue Loop Menu.
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
        }
    }

    end:
    return 0;
}