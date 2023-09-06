#include <stdio.h>

void main()
{

    system("cls");

    float sayi1, sayi2;
    int islem;

    printf("Iki sayi yaziniz: ");

    scanf("%f%f", &sayi1, &sayi2);

    printf("\n\nIslem turunu seciniz:\n");
    printf("1. Toplama\n");
    printf("2. Cikarma\n");
    printf("3. Carpma\n");
    printf("4. Bolme\n");

    scanf("%d", &islem);
    switch (islem)
    {
    case 1:
        printf("\nToplama islemi sonucu: %.3f + %.3f = %.3f", sayi1, sayi2, sayi1 + sayi2);
        break;
    case 2:
        printf("\nCikarma islemi sonucu: %.3f - %.3f = %.3f", sayi1, sayi2, sayi1 - sayi2);
        break;
    case 3:
        printf("\nCarpma islemi sonucu: %.3f x %.3f = %.3f", sayi1, sayi2, sayi1 * sayi2);
        break;
    case 4:
        printf("\nBolme islemi sonucu: %.3f / %.3f = %.3f", sayi1, sayi2, sayi1 / sayi2);
        break;
    default:
        printf("\nGecersiz giris.");
    }

    // Yukarıdaki switch bloğunun if ile yazılmış hali.
    // if (islem == 1)
    //     printf("\nToplama islemi sonucu: %.3f + %.3f = %.3f", sayi1, sayi2, sayi1 + sayi2);
    // else if (islem == 2)
    //     printf("\nCikarma islemi sonucu: %.3f - %.3f = %.3f", sayi1, sayi2, sayi1 - sayi2);
    // else if (islem == 3)
    //     printf("\nCarpma islemi sonucu: %.3f x %.3f = %.3f", sayi1, sayi2, sayi1 * sayi2);
    // else if (islem == 4)
    //     printf("\nBolme islemi sonucu: %.3f / %.3f = %.3f", sayi1, sayi2, sayi1 / sayi2);
    // else
    //     printf("\nGecersiz giris.");
}