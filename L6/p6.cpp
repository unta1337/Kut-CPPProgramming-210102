// Serial number validity checking.

#include <iostream>
#include <string>
#include <cctype>

bool isAlpha(std::string input);
bool isDigit(std::string input);

int main()
{
    std::string input;
    std::cout << "Enter your input: ";
    std::cin >> input;

    // Check if input length is correct.
    if (input.length() != 6)
    {
        std::cout << "Error: Wrong input length; length: " << input.length();
        return 0;
    }

    // Check if the ID part is alphabetic.
    std::string productID = input.substr(0, 2);
    if (!isAlpha(productID))
    {
        std::cout << "Error: Expected input: alphabets; input: " << productID;
        return 0;
    }

    // Check if the model number part is numeric.
    std::string modelNo = input.substr(2, 4);
    if (!isDigit(modelNo))
    {
        std::cout << "Error: Expected input: digits; input: " << modelNo;
        return 0;
    }

    // Print result.
    std::cout << "Correct input: " << input << "\n";
    std::cout << "Product ID: " << productID << "\n";
    std::cout << "Model Number: " << modelNo;

    return 0;
}

bool isAlpha(std::string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (!isalpha(input[i]))
            return false;
    }
    return true;
}

bool isDigit(std::string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}