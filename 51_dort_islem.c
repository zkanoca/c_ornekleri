#include <stdio.h>

float topla(float sayi1, float sayi2)
{
    return sayi1 + sayi2;
}
float cikar(float sayi1, float sayi2)
{
    return sayi1 - sayi2;
}
float carp(float sayi1, float sayi2)
{
    return sayi1 * sayi2;
}
float bol(float sayi1, float sayi2)
{
    return sayi1 / sayi2;
}

int main()
{
    float sayi1, sayi2, sonuc;
    int islem;

    printf("Yapmak istediginiz islemi seciniz:\n");
    printf("1. Toplama\n");
    printf("2. Cikarma\n");
    printf("3. Carpma\n");
    printf("4. Bolme\n");
    scanf("%d", &islem);

    printf("Birinci sayi: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayi: ");
    scanf("%f", &sayi2);

    switch (islem)
    {
    case 1:
        sonuc = topla(sayi1, sayi2);
        break;
    case 2:
        sonuc = cikar(sayi1, sayi2);
        break;
    case 3:
        sonuc = carp(sayi1, sayi2);
        break;
    case 4:
        sonuc = bol(sayi1, sayi2);
        break;
    default:
        printf("\nGecersiz secim. ):");
        break;
    }

    printf("\nSonuc: %.4f", sonuc);

    return 0;
}