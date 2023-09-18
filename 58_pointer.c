#include <stdio.h>
/*
6 adet sayi yaziniz.
7 5 3 9 6 4
Girdiginiz sayilarin toplami: 34.000
Girdiginiz sayilarin ortalamasi: 5.667
*/
int main()
{
    system("cls");
    int sayilar[6], toplam = 0;
    int i;

    int *ptr;

    ptr = &sayilar[0];

    printf("6 adet sayi yaziniz.\n");
    scanf("%d%d%d%d%d%d", &sayilar[0], &sayilar[1], &sayilar[2], &sayilar[3], &sayilar[4], &sayilar[5]);

    for (i = 0; i < 6; i++)
    {
        // toplam += sayilar[i];
        toplam += *(ptr + i);
    }

    printf("Girdiginiz sayilarin toplami: %d\n", toplam);
    return 0;
}
