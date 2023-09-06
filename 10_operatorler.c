#include <stdio.h>

void main()
{
    system("cls");

    int sayi1 = 64, sayi2 = 20;

    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi1 = sayi1 + 1; // 65
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi1++; // 66
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi2 = sayi2 - 1; // 19
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi2--; // 18
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi1 += 10; 
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi1 /= 2; //sayi1 = sayi1 / 2;
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi2 -= 180;
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi2 *= 3; //sayi2 = sayi2 * 3;
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi2 %= 17; //sayi2'nin 17'ye bölümünden kalanını sayi2 içine yaz
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    sayi2 %= 3;
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1++, ++sayi2);
    
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);

    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", --sayi1, sayi2--);
    
    printf("Sayi 1: %d \t\t Sayi 2: %d\n\n", sayi1, sayi2);





}
