// Score-grading system.

#include <iostream>

int main(void)
{
    while (true)
    {
        // Array for storing scores. (0: mid, 1: final, 2: quiz)
        int scores[3];
        std::cout << "Enter your score. (mid, final, quiz, -1 for mid score for exit): ";
        for (int i = 0; i < 3; i++)
            std::cin >> scores[i];

        if (scores[0] == -1)
            break;

        // Evaluate weighted value; decide student's grade.
        int weightedValue = 0.4f * scores[0] + 0.5f * scores[1] + 0.1f * scores[2];
        char grade = 'F';
        if (weightedValue >= 90)
            grade = 'A';
        else if (weightedValue >= 80)
            grade = 'B';
        else if (weightedValue >= 70)
            grade = 'C';
        else if (weightedValue >= 60)
            grade = 'D';

        std::cout << "Your grade is: " << grade << ".\n\n";
    }
    
    return 0;
}