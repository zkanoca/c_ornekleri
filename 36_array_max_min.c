#include <stdio.h>

void main()
{
    system("cls");
    //                  0   1   2   3   4    5   6   7   8   9
    int sayilar[10] = {39, 96, 74, 32, 20, 68, 78, 92, 65, 81};
    int i, eb, ek;

    // başlangıçta rastgele birer eleman seçelim.
    eb = sayilar[0];
    ek = sayilar[0];

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", sayilar[i]);
        
        if (eb < sayilar[i])
        {
            eb = sayilar[i];
        }

        if (ek > sayilar[i])
        {
            ek = sayilar[i];
        }
    }

    printf("\n\nDizinin en buyuk elemani %d ve en kucuk elemani %d olarak bulundu.", eb, ek);
}