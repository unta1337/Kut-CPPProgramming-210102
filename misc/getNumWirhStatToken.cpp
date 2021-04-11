#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int getNumWithStarToken()
{
    // Need to include stdio.h, stdlib.h, conio.h.

    int input;
    char inputChar[50];
    char buffer;
    int index = 0;
    while (1)
    {
        buffer = getch();
        if (!('0' <= buffer && buffer <= '9' || buffer == '\r'))
            continue;
        inputChar[index++] = buffer;
        if (buffer != '\r')
            printf("*");
        else
        {
            printf("\n");
            break;
        }
    }
    inputChar[--index] = 0;
    return atoi(inputChar);
}

int main(void)
{
    int input = getNumWithStarToken();
    printf("%d", input);
    
    return 0;
}