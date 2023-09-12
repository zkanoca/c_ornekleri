#include <stdio.h>

int main()
{

    int dizi1[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int dizi2[3][3];
    int r, c;

    int dizi3[2][2] = {{1, 2}, {3, 4}};      // {1,2,3,4}
    int dizi4[2][3] = {1, 2, 3, 4, 5, 6};    // {{1,2,3},{1,2,3}}
    int dizi5[3][3] = {1, 2, 3, 4, 5, 6, 7}; //{{1,2,3},{4,5,6},{7}}
    int dizi6[2][4] = {1, 2, 3, 4};          //{{1,2,3,4},{}}

    // bunu yapamayız.
    //  dizi2 = dizi1;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            dizi2[r][c] = dizi1[r][c];
        }
    }

    return 0;
}