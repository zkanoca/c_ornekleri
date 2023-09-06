#include <stdio.h>

void main()
{

    system("cls");

    int i, sayi, faktoriyel = 1;

    printf("Bir sayi yaziniz:");
    scanf("%d", &sayi);
    if (sayi <= 16)
    {
        for (i = 1; i <= sayi; i++)
        {
            faktoriyel *= i;
            printf("*");
        }

        printf("\n%d! = %d", sayi, faktoriyel);
    }
    else
    {
        printf("Girdiginiz sayi biraz buyuk oldugu icin hesaplama yapilmadi.");
    }
}