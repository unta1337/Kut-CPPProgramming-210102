// Converting binary expression into decimal expression.

#include <iostream>

int main(void)
{
    while (true)
    {
        // Declare variables for input and output; recieve user input.
        int binaryInput;
        int decimalOutput = 0;
        std::cout << "Enter your binary number. (Enter -1 to exit): ";
        std::cin >> binaryInput;

        if (binaryInput == -1)
            break;

        // Convert binary expression into decimal expression.
        int binaryInput_ = binaryInput;         // Copy user input to extract its digits from it.
        int power = 1;                          // Decalre power for applying digits' place values.
        while (binaryInput_ > 0)
        {
            // Extract digits via modulo operator; apply place value.
            int temp = binaryInput_ % 10;
            decimalOutput += power * temp;

            
            binaryInput_ /= 10;         // Divide binary number by 10 for next iteration.
            power *= 2;                 // Multiply power by 2 for next iteration.
        }

        std::cout << binaryInput << " in decimal expression is " << decimalOutput << ".\n\n";
    }

    return 0;
}