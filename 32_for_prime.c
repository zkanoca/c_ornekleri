#include <stdio.h>

void main()
{
    system("cls");

    int sayi, i, asal=1;

    printf("Bir tamsayi yaziniz:");
    scanf("%d", &sayi);

    if (sayi < 2)
    {
        printf("%d bir asal sayi degildir.\n", sayi);
    }

    for ( i = 2; i <= sayi/2; i++)
    {
        if (sayi % i == 0)
        {
            //asal 0 ise asal değil; 1 ise asal.
            asal = 0;
            break;
        }
    }

    printf("Girdiginiz sayi %d\n", sayi);

    if (asal == 1)
    {
        printf("ASALDIR.");
    }
    else {
        printf("ASAL degildir.");
    }
}