// Converting HH MM SS to Second.

#include <iostream>

// Define time constants.
#define MIN 60
#define HOUR 3600

int main(void)
{
    // Declare variables only once.
    int h, m, s, temp;
    while (true)
    {
        loop:
        std::cout << "Enter your time (HH MM SS): ";
        std::cin >> h >> m >> s;

        // Converting task.
        temp += h * HOUR;
        temp += m * MIN;
        temp += s;

        std::cout << h << " hour(s) " << m << " minuet(s) " << s << " second(s) is " << temp << " second(s)." << std::endl << std::endl;

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