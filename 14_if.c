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
        printf("Sayi 2 ile tam bolunur.\n\n");
        printf("Sayi cifttir.\n\n");
    }
    if (sayi % 3 == 0)
        printf("Sayi 3 ile tam bolunur.\n\n");

    if (sayi % 4 == 0)
        printf("Sayi 4 ile tam bolunur.\n\n");

    if (sayi % 5 == 0)
        printf("Sayi 5 ile tam bolunur.\n\n");

    if ((sayi % 2 == 0) && (sayi % 3 == 0))
        printf("Sayi 6 ile tam bolunur.\n\n");

    if (sayi % 7 == 0)
        printf("Sayi 7 ile tam bolunur.\n\n");

    if ((sayi % 2 == 0) && (sayi % 4 == 0))
        printf("Sayi 8 ile tam bolunur.\n\n");

    if (sayi % 9 == 0)
        printf("Sayi 9 ile tam bolunur.\n\n");

    if ((sayi % 2 == 0) && (sayi % 5 == 0))
        printf("Sayi 10 ile tam bolunur.\n\n");
}
