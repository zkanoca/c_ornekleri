#include <stdio.h>

void main()
{
    system("cls");

    char c;

    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("%c\n", c);
    }

    for (c = 'a'; c <= 'z'; c++)
    {
        printf("%c\n", c);
    }

    // 0100 0001 = A
    // 0110 0001 = a
}