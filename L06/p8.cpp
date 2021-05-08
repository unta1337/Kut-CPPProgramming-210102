// Input string analyzer.

#include <iostream>
#include <string>

int main(void)
{
    // Initialize variables.
    int alphabetCount = 0;
    int numberCount = 0;
    int spaceCount = 0;
    int unexpected = 0;
    std::string input;
    std::cout << "Enter your input: ";
    std::getline(std::cin, input);

    // Check if the char is alphaber, number or spacing.
    for (int i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]))
            alphabetCount++;
        else if (isdigit(input[i]))
            numberCount++;
        else if (input[i] == ' ')
            spaceCount++;
        else
            unexpected++;
    }

    // Print result.
    std::cout << "Input string: \"" << input << "\"\n";
    std::cout << "Alphabetic characters: " << alphabetCount << "\n";
    std::cout << "Numeric characters: " << numberCount << "\n";
    std::cout << "Spacing characters: " << spaceCount << "\n";
    if (unexpected)
        std::cout << "Unexpected characters: " << unexpected << "\n";

    return 0;
}