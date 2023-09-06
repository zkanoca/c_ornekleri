#include <stdio.h>

void main()
{

    system("cls");

    int sayi;

    printf("Bir sayi yaziniz: ");

    scanf("%d", &sayi);

    printf("\n\n");

    if (sayi % 2 == 0)
    {
        printf("Sayi cifttir.\n");
    }
    else
    {
        printf("Sayi tektir.\n");
    }

    if (sayi < 0)
    {
        printf("Sayi negatiftir.\n");
    }
    else if (sayi == 0)
    {
        printf("Sayi sifirdir.");
    }
    else
    {
        printf("Sayi pozitiftir.");
    }
}
