#include <stdio.h>

int main()
{
    // Değişken tanımlamaları
    int Ar, Ac, Br, Bc, r, c, i;

    // A matrisinin boyutları kullanıcıdan istenir
    printf("A matrisinin satir ve sutun sayisi kac olacak?:");
    scanf("%d%d", &Ar, &Ac);

    // B matrisinin boyutları kullanıcıdan istenir
    printf("B matrisinin satir ve sutun sayisi kac olacak?:");
    scanf("%d%d", &Br, &Bc);

    // A matrisinin sütun sayısı B matrisinin satır sayısına
    // eşit olmalıdır. Yoksa çarpma yapılamaz.
    if (Ac != Br)
    {
        printf("Matris boyutlari carpma islemi icin uygun degil");
        return 0;
    }

    // Matrisler istenen boyutta oluşturulur
    int A[Ar][Ac], B[Br][Bc], C[Ar][Bc];

    // Çarpım sonucu matrisinin içi sıfırlanır.
    for (r = 0; r < Ar; r++)
    {
        for (c = 0; c < Bc; c++)
        {
            C[r][c] = 0;
        }
    }

    // A matrisinin elemanlarini kullanici girer.
    for (r = 0; r < Ar; r++)
    {
        for (c = 0; c < Ac; c++)
        {
            printf("A matrisinin %d,%d elemanini yaziniz:", r + 1, c + 1);
            scanf("%d", &A[r][c]);
        }
    }

    // B matrisinin elemanlarini kullanici girer.
    for (r = 0; r < Br; r++)
    {
        for (c = 0; c < Bc; c++)
        {
            printf("B matrisinin %d,%d elemanini yaziniz:", r + 1, c + 1);
            scanf("%d", &B[r][c]);
        }
    }

    for (r = 0; r < Ar; r++)
    {
        for (c = 0; c < Bc; c++)
        {
            for (i = 0; i < Ac; i++)
            {

                C[r][c] += A[r][i] * B[i][c];

                //  1 2 3    7  8
                //  4 5 6    9  0
                //          -1 10

                // 1*7 + 2*9 + 3*(-1) = 22
                // 1*8 + 2*0 + 3*10   = 38
            }
        }
    }

    for (r = 0; r < Ar; r++)
    {
        for (c = 0; c < Bc; c++)
        {
            printf("%d\t", C[r][c]);
        }
        printf("\n");
    }
    return 0;
}
