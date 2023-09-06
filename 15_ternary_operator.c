#include <stdio.h>

void main()
{

    system("cls");

    int sayi;

    printf("Bir sayi yaziniz: ");

    scanf("%d", &sayi);

    printf("\n\n");

    // Ternary operator.
    sayi % 2 == 0 ? printf("Sayi cifttir.\n\n") : printf("Sayi tektir.\n\n");

    if (sayi % 2 == 0)
    {
        printf("Sayi cifttir.\n\n");
    }
    else
    {
        printf("Sayi tektir.\n\n");
    }
}
