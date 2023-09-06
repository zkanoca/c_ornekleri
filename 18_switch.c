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
    case 2:
    case 4:
    case 6:
    case 8:
        printf("Cift.\n");
        break;
    // case 1:
    // case 3:
    // case 5:
    // case 7:
    // case 9:
    //     printf("Tek\n");
    //     break;
    default:
        printf("Tek.\n");
    }
}