#include <stdio.h>


int main()
{

    int sayi = 11;

    int *ptr;

    ptr = &sayi;

    printf("Sayi degeri: %d\n", sayi);
    printf("Sayi tutuldugu HEX adres: %x\n", &sayi);
    printf("Sayi tutuldugu DEC adres: %d\n", &sayi);

    printf("****************************************\n");


    printf("ptr ile tutulan deger: %d \n", *ptr);
    printf("ptr degiskeninin adresi: %p \n", ptr);

    printf("****************************************\n");

    int k  = 1234568;
    int *p;
    p = &k;

    printf("k degiskeninin degeri: %d \n", k);
    printf("k degiskeninin adresi: %x \n", &k);
    printf("k degiskeninin adresi : %p \n", p);
    printf("p isaretcisinin  adresi : %x \n", &p);



    return 0;
}