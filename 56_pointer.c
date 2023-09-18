#include <stdio.h>

int main()
{

    int sayi = 58746;

    int *ptr1 = &sayi;

    // bir pointer, bir normal degisken tanimlamasi
    int *ptr2, baskaBirDegisken;

    // siradan bir pointer degisken tanimlamasi
    int *ptr3;


    printf("sayi degiskeninin tutuldugu adres: %p\n", ptr1);
    printf("sayi degiskeninin tutuldugu adres: %p\n", &sayi);

    printf("sayi degiskeninin degeri: %d\n", *ptr1);
    printf("sayi degiskeninin degeri: %d\n", sayi);

    return 0;
}