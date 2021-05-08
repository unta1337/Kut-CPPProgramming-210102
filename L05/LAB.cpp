// Random walker.

#include <iostream>
#include <cstdlib>
#include <ctime>

// Constants for creating N * M grid.
#define N 5
#define M 5

bool isDone(int grid[M][N]);                                        // Decide if the grid is fully visitied or not.
int moveX(int input);                                               // Decide x direction from direction code.
int moveY(int input);                                               // Decide y direction from direction code.
bool edge(int current[]);                                           // Decide if current position is in the gird or not.
void update(int grid[M][N], int current[]);                         // Update grid-visiting count.
void move(int grid[M][N], int current[], int input, int *count);    // Function for actual moving; update current position.
void status(int gird[M][N], int current[], int count);              // Show current position and total moves.
void mostVisitedTile(int grid[M][N], int most[]);                   // Decide most frequently visited tile in the grid.

int main(void)
{
    // Random seed initialization.
    srand((unsigned int)time(NULL));

    // Initialize variables.
    int grid[M][N] = { 0 };                 // Declare 5 * 5 grid.
    int currentPosition[2] = { 2, 2 };      // Initial position is (2, 2).
    update(grid, currentPosition);          // To include initial position.

    // Variables to count visiting occurrence.
    int totalMoves = 0;
    int mostFrequentlyVisited[2] = { 2, 2 };

    // etc.
    bool showStatus = true;

    // Move while gird is not fully visited.
    time_t start = clock();
    while (!isDone(grid))
    {
        if (showStatus)
        {
            status(grid, currentPosition, totalMoves);
            std::cout << "\n";
        }
        int randomDirection = rand() % 8;
        move(grid, currentPosition, randomDirection, &totalMoves);
    }
    if (showStatus)
    {
        status(grid, currentPosition, totalMoves);
        std::cout << "\n";
    }
    time_t end = clock();

    mostVisitedTile(grid, mostFrequentlyVisited);

    // Print results.
    std::cout << "[RESULTS]\n";
    std::cout << "Total moves: " << totalMoves << " moves\n";
    std::cout << "Most frequently visited tile: (" << mostFrequentlyVisited[0] << ", " << mostFrequentlyVisited[1] << "), " << grid[mostFrequentlyVisited[1]][mostFrequentlyVisited[0]] << " times\n";
    std::cout << "Time consumed: " << (double)(end - start) / CLOCKS_PER_SEC << " seconds (" << end - start << " clocks)";

    return 0;
}

bool isDone(int grid[M][N])
{
    // Check if all grid is fully visited or not.
    for (int y = 0; y < M; y++)
    {
        for (int x = 0; x < N; x++)
            if (!grid[y][x])            // If some grid has visited 0 time, then its negaition is 1, which it true, and returns false.
                return false;
    }
    return true;                        // If all tiles are considered as visited-tile, returns true.
}

int moveX(int input)
{
    // Return corresponding direction value.
    switch (input)
    {
        case 5:
        case 6:
        case 7:
            return -1;
        case 1:
        case 2:
        case 3:
            return 1;
        default:
            return 0;
    }
}

int moveY(int input)
{
    // Return corresponding direction value.
    switch (input)
    {
        case 0:
        case 1:
        case 7:
            return -1;
        case 3:
        case 4:
        case 5:
            return 1;
        default:
            return 0;
    }
}

bool edge(int current[])
{
    // Decide if the current position is in the grid or not.
    bool x = (current[0] < 0) || (current[0] >= N);
    bool y = (current[1] < 0) || (current[1] >= M);
    return x || y;
}

void update(int grid[M][N], int current[])
{
    // Add one to current position.
    grid[current[1]][current[0]]++;
}

void move(int grid[M][N], int current[], int input, int *count)
{
    // Move to random direction; cancel move if current position hits the edges.
    // Add 1 to count; cancel if current position hits the edges.
    current[0] += moveX(input);
    current[1] += moveY(input);
    if (edge(current))
    {
        current[0] -= moveX(input);
        current[1] -= moveY(input);
        return;
    }
    (*count)++;
    update(grid, current);
}

void status(int grid[M][N], int current[], int count)
{
    // Print current position, grid status and total moves.
    std::cout << "Current position: (" << current[0] << ", " << current[1] << ").\n\t";
    for (int x = 0; x < N; x++)
        std::cout << "\tx = " << x;
    std::cout << "\n";
    for (int y = 0; y < M; y++)
    {
        std::cout << "\ty = " << y;
        for (int x = 0; x < N; x++)
            std::cout << "\t" << grid[y][x];
        std::cout << "\n";
    }
    std::cout << "Total moves: " << count << ".\n";
}

void mostVisitedTile(int grid[M][N], int most[])
{
    // Decide most frequently visited tile in the grid.
    for (int y = 0; y < M; y++)
    {
        for (int x = 0; x < N; x++)
            if (grid[y][x] > grid[most[1]][most[0]])
            {
                most[0] = x;
                most[1] = y;
            }
    }
}