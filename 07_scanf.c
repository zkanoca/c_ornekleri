#include <stdio.h>

void main()
{
    int sayi1, sayi2, toplam;

    printf("Iki sayi yaziniz:\n");

    printf("Birinci sayiyi yaziniz:");
    scanf("%d%d", &sayi1, &sayi2);

    printf("\n");
    printf("\n");

    toplam = sayi1 + sayi2;

    printf("Toplam: %d", toplam);
}