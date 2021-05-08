// Breaking down a number into its digits.

#include <iostream>

int main(void)
{
    // Declare variables only once.
    int input, input_;
    while (true)
    {
        loop:
        std::cout << "Enter your integer (0 <= n < 10000): ";
        std::cin >> input;
        if (input < 0 || input >= 10000)
        {
            std::cout << std::endl;
            goto loop;
        }

        // Break down Process.
        input_ = input / 1000;      // Extract 1st digit of the number.
        input_ %= 10;               // Take only 1st digit of the number.
        std::cout << "10 to the power of 3: " << input_ << std::endl;

        input_ = input / 100;       // Extrac 2nd digit of the number.
        input_ %= 10;               // Take only 2nd digit of the number; this process repeats.
        std::cout << "10 to the power of 2: " << input_ << std::endl;

        input_ = input / 10;
        input_ %= 10;
        std::cout << "10 to the power of 1: " << input_ << std::endl;

        input_ = input / 1;
        input_ %= 10;
        std::cout << "10 to the power of 0: " << input_ << std::endl << std::endl;

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