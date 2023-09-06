#include <stdio.h>

void main()
{

    system("cls");

    int sayi;

    printf("Bir sayi yaziniz: ");

    scanf("%d", &sayi);

    printf("\n\n");

    if ( sayi % 2 == 0)
    {
        printf("Sayi cifttir.");
    }   
    else
    {
        printf("Sayi tektir.");
    }

}
