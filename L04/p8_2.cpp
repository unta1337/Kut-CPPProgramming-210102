// Random Numbers 2.

#include <iostream>
#include <cstdlib>
#include <ctime>

int rand_range(int lower, int upper)
{
    int interval = upper - lower + 1;
    return rand() % interval + lower;
}

int main(void)
{
    // Initialize random seed with time.
    srand((unsigned int)time(NULL));

    int count[6];
    int sumOfCount[6] = { 0 };
    float prob[6] = { 0.0f };

    // Declare variables for counting each numbers and calculating probability.
    int iteration;
    int roll = 600;
    for (iteration = 0; iteration < 10; iteration++)
    {
        // Reset counter.
        for (int i = 0; i < 6; i++)
            count[i] = 0;

        // Actual counting part.
        for (int i = 0; i < roll; i++)
        {
            int temp = rand_range(1, 6);
            count[temp - 1]++;
        }

        for (int i = 0; i < 6; i++)
            std::cout << "There're " << count[i] << " times of " << i + 1 << " has been occurred.\n";
        std::cout << "\n";

        // Accumulate each occurrence.
        for (int i = 0; i < 6; i++)
            sumOfCount[i] += count[i];
    }

    for (int i = 0; i < 6; i++)
        std::cout << "Total occurence of " << i + 1 << " is " << sumOfCount[i] << ".\n";
    std::cout << "[Iteration: " << iteration << ", roll " << roll << " times each iteration.]\n\n";

    // Calculate each probability.
    for (int i = 0; i < 6; i++)
        prob[i] = sumOfCount[i] / (float)(roll * iteration);
    for (int i = 0; i < 6; i++)
        std::cout << "Probability of occurring " << i + 1 << " is " << prob[i] << ".\n";

    return 0;
}