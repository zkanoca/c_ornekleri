#include <stdio.h>

void main()
{

    system("cls");

    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 9; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}