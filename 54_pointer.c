#include <stdio.h>

int main()
{

    int i, sayi[5] = {15, 87, 65, 43, 37};

    int *ptr;

    ptr = &sayi;

    for (i = 0; i < 5; i++)
    {
        printf("sayi dizisinin %d. elemaninin adresi %x\n", i + 1, ptr + i);
        printf("sayi dizisinin %d. elemani %d\n\n", i + 1, *(ptr + i));
    }

    return 0;
}