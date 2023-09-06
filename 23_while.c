#include <stdio.h>

void main()
{

    system("cls");

    int sayi, faktoriyel = 1;

    printf("Bir sayi yaziniz: ");
    scanf("%d", &sayi);

    if (sayi == 0)
    {
        faktoriyel = 1;
    }
    else if (sayi < 0)
    {
        printf("Sayi sifirdan kucuk. Faktoriyel hesabi yapilamaz.");
    }
    else
    {
        while (sayi > 1)
        {
            faktoriyel *= sayi--;
        }
    }
    printf("Faktoriyel islemi sonucu: %d", faktoriyel);
}