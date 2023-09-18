#include <stdio.h>

int main()
{
    system("cls");
    int sayi1 = 98, sayi2 = 19;

    int *ptr1, *ptr2;

    ptr1 = &sayi1;

    printf("ptr1 = %p\n", ptr1);
    printf("*************\n");
    printf("*ptr1 = %d\n", *ptr1);

    printf("*************\n");

    ptr2 = &sayi2;

    printf("ptr2 = %p\n", ptr2);
    printf("*************\n");
    printf("*ptr2 = %d\n", *ptr2);

    sayi1 = 432;
    sayi2 = 249;
    printf("******Degiskenler guncellendikten sonra*******\n");

    printf("ptr1 = %p\n", ptr1);
    printf("*************\n");
    printf("*ptr1 = %d\n", *ptr1);

    printf("ptr2 = %p\n", ptr2);
    printf("*************\n");
    printf("*ptr2 = %d\n", *ptr2);

    printf("******Pointer degerleri guncellendikten sonra*******\n");

    sayi1 = *(--ptr1);
    sayi2 = *(++ptr2);

    printf("ptr1 = %p\n", ptr1);
    printf("*************\n");
    printf("*ptr1 = %d\n", *ptr1);

    printf("ptr2 = %p\n", ptr2);
    printf("*************\n");
    printf("*ptr2 = %d\n", *ptr2);


    printf("******Degisken degerleri takaslandiktan sonra*******\n");
    // sayi1 = *ptr1;
    // sayi2 = *ptr2;

    printf("sayi1 = %d\n", sayi1);
    printf("*************\n");
    printf("*sayi2 = %d\n", sayi2);

    printf("sayi1 adresi = %x\n", &sayi1);
    printf("*************\n");
    printf("*sayi2 adresi = %x\n", &sayi2);


    return 0;
}