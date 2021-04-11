// Playing rock, scissors, paper.

#include <iostream>
#include <ctime>

int main(void)
{
    while (true)
    {
        // char* array for printing rock, scissors, paper.
        const char* choices[3] = {"rock", "scissors", "paper"};

        char input[20];
        std::cout << "Enter your choice in lower case. (rock, scissors, paper, e for exit): ";
        std::cin >> input;

        if (input[0] == 'e')
            break;

        switch (input[0])       // Convert input into 0, 1, 2. 0: rock, 1: scissors, 2: paper.
        {
            case 'r':
                input[0] = 0;
                break;
            case 's':
                input[0] = 1;
                break;
            case 'p':
                input[0] = 2;
                break;
        }

        char computerChoice = clock() * 256 % 3;        // Decide what computer chooses.
        int result = input[0] - computerChoice;         // If result is -1 or 2, user wins; -2 or 1, computet wins; 0, draw.
        // Cases:
        // User: 0
        // Computer: 0, 1, 2
        // Result: 0, -1, -2 (Draw, Win, Lose)
        //
        // User: 1
        // Computer: 0, 1, 2
        // Result: 1, 0, -1 (Lose, Draw, Win)
        //
        // User: 2
        // Computer: 0, 1, 2
        // Result: 2, 1, 0 (Win, Lose, Draw)

        // Print result.
        std::cout << "Computer vs. User: " << choices[computerChoice] << " vs. " << choices[input[0]] << ".\n";
        switch (result)
        {
            case -1:
            case 2:
                std::cout << "User wins!\n\n";
                break;
            case -2:
            case 1:
                std::cout << "Computer wins!\n\n";
                break;
            case 0:
                std::cout << "Draw!\n\n";
                break;
        }
    }

    return 0;
}