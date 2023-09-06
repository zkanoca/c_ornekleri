#include <stdio.h>

void main()
{

    system("cls");

    int sayi, toplam = 0, k;
    int sayi2;


    printf("Bir sayi yaziniz: ");
    scanf("%d", &sayi);

    sayi2 = sayi;


    while (sayi != 0)
    {
        k = sayi % 10;
        toplam += k;
        sayi /= 10; // sayi = sayi / 10;
    }

    printf("\n%d rakamlari toplami %d'dir.\n", sayi2, toplam);

}