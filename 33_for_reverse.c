#include <stdio.h>

void main()
{
    system("cls");

    int sayi, sayiYedek, tersi = 0, kalan;

    printf("Bir sayi yaziniz: ");

    scanf("%d", &sayi);
    sayiYedek = sayi;

    if (sayi < 10 && sayi >= 0)
    {
        printf("\n%d", sayi);
    }
    else
    {
        for (; sayi != 0; sayi /= 10)
        {
            kalan = sayi % 10;
            tersi = kalan + tersi * 10;
        }

         

        // while ile yapsaydık...
        //  while (sayi != 0)
        //  {
        //      kalan = sayi % 10;
        //      tersi = tersi + kalan * 10;
        //      sayi /= 10;
        //  }
    }

    printf("\n%d sayisinin tersi %d olarak bulunmustur.", sayiYedek, tersi);
}
