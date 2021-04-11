// Word count.

#include <iostream>
#include <string>

int main(void)
{
    // Initialize variables.
    int wordCount = 0;
    std::string input;
    std::cout << "Enter your input: ";
    std::getline(std::cin, input);

    // Count word base on spacing char.
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
            wordCount++;
    }
    wordCount++;        // Increase word count at the end of the string; this is necessary because the last word is not counted because there's no ' ', but '\0'.

    // Print result.
    std::cout << "Input string: \"" << input << "\"\n";
    std::cout << "Word Count: " << wordCount << "\n";

    return 0;
}