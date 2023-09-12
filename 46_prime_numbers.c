#include <stdio.h>

int asal_sayi_mi(int sayi);

int main()
{
    system("cls");

    int baslangic, bitis, i, asalMi;

    printf("Bir sayi araligi giriniz:");
    scanf("%d%d", &baslangic, &bitis);

    for (i = baslangic; i <= bitis; i++)
    {
        asalMi = asal_sayi_mi(i);

        if ( asalMi == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int asal_sayi_mi(int sayi)
{
    int j, durum = 1;
    //durum: 1->asal, 0->asal degil

    for (j = 2; j <= sayi / 2; j++)
    {
        if (sayi % j == 0)
        {
            durum = 0;
            break;
        }
    }

    return durum;
}