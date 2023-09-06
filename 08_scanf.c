#include <stdio.h>

void main()
{
    int sayi1, sayi2, toplam;

    printf("Iki sayi yaziniz:\n\n");

    printf("Birinci sayiyi yaziniz:");
    scanf("%d", &sayi1);
    printf("\n");
    printf("\n");

    printf("Ikinci sayiyi yaziniz:");
    scanf("%d", &sayi2);

    printf("\n");
    printf("\n");

    toplam = sayi1 + sayi2;

    printf("Toplam: %d", toplam);
}