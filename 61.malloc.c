#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, toplam = 0;

    int *ptr;

    printf("Eleman sayisini yaziniz: ");
    scanf("%d", &n);

    ptr = (int *)malloc(sizeof(int) * n);

    if (ptr == NULL)
    {
        printf("Bellekte yeterli yer bulunamadi.\nProgram sonlandiriliyor...");
        return 0; //    exit(0);
    }

    printf("Elemanlari giriniz:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        toplam += *(ptr + i);
        printf("Girilen %d sayinin toplami: %d\n", i + 1, toplam);
    }

    printf("Girilen tum sayilarin toplami %d olarak bulunmustur.\n", toplam);

    free(ptr);

    return 0;
}
