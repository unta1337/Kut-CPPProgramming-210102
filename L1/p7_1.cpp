// Convert cm to feet inches.
// Converting Constants: https://www.sfei.org/it/gis/map-interpretation/conversion-constants

#include <iostream>

int main(void)
{
    // Converting constants.
    const float cmToInch = 1 / 2.54f;
    const float inchToFeet = 1 / 12.0f;
    const float feetToInch = 12.0f;

    // Declare variables only once.
    float cm, inch, temp;
    int feet;
    while (true)
    {
        loop:
        std::cout << "Enter your height: ";
        std::cin >> cm;

        // Converting cm to feet inches.
        inch = cm * cmToInch;            // Convert cm to inches.
        temp = inch * inchToFeet;           // temp is now cm in feet, but with decimal point number.
        feet = (int)temp;                   // feet is now cm in feet, but without decimal point number.
        inch -= feet * feetToInch;          // Subtracting feet in inches so that the inches is reduced by amount of feet.

        std::cout << cm << " cm is " << feet << " feet " << inch << "." << std::endl << std::endl;

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