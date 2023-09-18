#include <stdio.h>
void swap(int s1, int s2)
{
    int temp;

    temp = s1;
    s1 = s2;
    s2 = temp;

    printf("\ns1 adresi: %x\ns2 adresi: %x\n", &s1, &s2);
}

void swapP(int *s1, int *s2)
{
    int tmp = *s1;

    *s1 = *s2;

    *s2 = tmp;
    printf("\nswapP() fonksiyonu icindeki degisken adresleri\ns1 adresi: %x\ns2 adresi: %x\n", s1, s2);
}

int main()
{
    system("cls");

    int sayi1 = 1902, sayi2 = 35;

    printf("\nsayi1 ve sayi2 baslangic degerleri:\nsayi1=%d\tsayi2=%d\n", sayi1, sayi2);
    printf("\nsayi1 ve sayi2 adresleri:\nsayi1=%x\tsayi2=%x\n", &sayi1, &sayi2);

    swap(sayi1, sayi2);
    printf("\nswap() isleminden sonra sayi1 ve sayi2 degerleri:\nsayi1=%d\tsayi2=%d\n", sayi1, sayi2);

    swapP(&sayi1, &sayi2);

    printf("\nswapP() isleminden sonra sayi1 ve sayi2 degerleri:\nsayi1=%d\tsayi2=%d\n", sayi1, sayi2);

    return 0;
}