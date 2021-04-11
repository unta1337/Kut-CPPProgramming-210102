#include <iostream>

char* intToBase(int input, int base)
{
    static char out[33];
    for (int i = 0; i < 33; i++)
        out[i] = 0;
    unsigned int input_ = (unsigned int)input;

    int index = 0;
    while(input_ > 0)
    {
        int temp = input_ % base;
        if (temp < 10)
            out[index++] = temp + '0';
        else
        {
            switch(temp)
            {
                case 10:
                    out[index++] = 'A';
                    break;
                case 11:
                    out[index++] = 'B';
                    break;
                case 12:
                    out[index++] = 'C';
                    break;
                case 13:
                    out[index++] = 'D';
                    break;
                case 14:
                    out[index++] = 'E';
                    break;
                case 15:
                    out[index++] = 'F';
                    break;
            }
        }
        input_ /= base;
    }

    for (int i = 0; i < index / 2; i++)
    {
        char temp = out[i];
        out[i] = out[index - i - 1];
        out[index - i - 1] = temp;
    }

    return out;
}

char* decimalPointToBase(double input, int base)
{
    static char out[200];
    int index = 0;
    while (input != 0 && index != 200)
    {
        input *= base;
        int temp = (int)input;
        input -= temp;
        if (temp < 10)
            out[index++] = temp + '0';
        else
        {
            switch(temp)
            {
                case 10:
                    out[index++] = 'A';
                    break;
                case 11:
                    out[index++] = 'B';
                    break;
                case 12:
                    out[index++] = 'C';
                    break;
                case 13:
                    out[index++] = 'D';
                    break;
                case 14:
                    out[index++] = 'E';
                    break;
                case 15:
                    out[index++] = 'F';
                    break;
            }
        }
    }
    out[index] = 0;

    return out;
}

char* decToBaseN(double input, int base)
{
    static char out[250];
    char integer[50];
    char decimal[200];

    strcpy(integer, intToBase((int)input, base));
    strcpy(decimal, decimalPointToBase(input - (int)input, base));

    strcpy(out, integer);
    strcat(out, ".");
    strcat(out, decimal);

    return out;
}

int main(void)
{
    while (true)
    {
        double f;
        int base;

        std::cout << "Enter your Decimal Number and Base you want to convert (Dec Base): ";
        std::cin >> f >> base;
        //std::cout << f << " in base " << base << " is: " << decToBaseN(f, base) << std::endl << std::endl;
        printf("%lf in base %d is: %s\n\n", f, base, decToBaseN(f, base));
    }

    return 0;
}