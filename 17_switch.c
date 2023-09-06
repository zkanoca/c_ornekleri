#include <stdio.h>

void main()
{

    system("cls");

    int sayi;

    printf("Bir basamakli pozitif bir sayi yaziniz: ");

    scanf("%d", &sayi);

    printf("\n\n");

    switch (sayi)
    {
    case 0:
        printf("Sifir\n");
        break;
    case 1:
        printf("Bir\n");
        break;
    case 2:
        printf("Iki\n");
        break;
    case 3:
        printf("Uc\n");
        break;
    case 4:
        printf("Dort\n");
        break;
    case 5:
        printf("Bes\n");
        break;
    case 6:
        printf("Alti\n");
        break;
    case 7:
        printf("Yedi\n");
        break;
    case 8:
        printf("Sekiz\n");
        break;
    case 9:
        printf("Dokuz\n");
        break;
    default:
        printf("Gecerli bir giris yapmadiniz.\n");
    }
}