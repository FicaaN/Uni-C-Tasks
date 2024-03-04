#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int row = 8;
    char column = 'a';

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("+----");
        }

        printf("+\n");

        for (int j = 0; j < 8; j++)
        {
            printf("| %c%d ", column, row);
            column++;
        }

        printf("|\n");
        row--;
        column = 'a';
    }

    for (int j = 0; j < 8; j++)
    {
        printf("+----");
    }

    printf("+\n");

    return 0;
}

