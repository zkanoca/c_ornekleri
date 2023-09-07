#include <stdio.h>

void main()
{
    system("cls");
    //                0   1   2   3   4
    int sayilar[5] = {9, 96, 74, 32, 20};
    int i, toplam = 0;
    float ort = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", sayilar[i]);
        toplam = toplam + sayilar[i];
    }
    ort = (float) toplam / 5;

    printf("\nDizi elemanlari toplami %d olarak hesaplanmistir.", toplam);
    printf("\nDizi elemanlari ortalamasi %5.3f olarak hesaplanmistir.", ort);
}