#include <stdio.h>

int tekCift(int sayi);

int main()
{
    int sayi;
    int durum;

    printf("Bir sayi yaziniz:");
    scanf("%d", &sayi);

    durum = tekCift(sayi);

    if (durum == 0)
    {
        printf("\n\n%d bir cift sayidir.", sayi);
    }
    else 
    {
        printf("\n\n%d bir tek sayidir.", sayi);
    }

    return 0;
}

int tekCift(int s)
{
    // if (s % 2 == 0)
    // {   
    //     return 0;
    // }
    // else
    // {
    //     return 1;
    // }

    return s % 2;
}