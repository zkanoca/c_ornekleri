#include <stdio.h>

/*

    1  2  3
A = 4  5  8
    9  5  3

    0  2  8
b = 7  2  7
    6  5  1

     1  4 11
t = 11  7 15
    15 10  4
*/

int main()
{

    int A[3][3], B[3][3], T[3][3];
    int r, c;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("A matrisinin %d,%d elemanini giriniz:", r+1, c+1);
            scanf("%d", &A[r][c]);
        }
    }
    printf("\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("B matrisinin %d,%d elemanini giriniz:", r+1, c+1);
            scanf("%d", &B[r][c]);
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            T[r][c] = A[r][c] + B[r][c];
            printf("%d\t", T[r][c]);
        }
        printf("\n");
    }

    return 0;
}