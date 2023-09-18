#include <stdio.h>

int main()
{
    system("cls");
    int sayilar[10] = {5, 12, 43, 9, 100, -1, 75, 21, 19, -8};
    int i;

    int *ptr;

    ptr = &sayilar[0];

    printf("{5, 12, 43, 9, 100, -1, 75, 21, 19, -8}\n\n");

    printf("*ptr = %d\n", *ptr);
    printf("*(ptr+1) = %d\n", *(ptr + 1));
    printf("*(ptr+3) = %d\n", *(ptr + 3));
    printf("*(ptr+8) = %d\n", *(ptr + 8));
    printf("*(ptr-2) = %d\n", *(ptr - 2));
    printf("*(ptr-5) = %d\n", *(ptr - 5));

    *ptr++; //adresi arttırdı
    printf("*ptr++ = %d\n", *ptr);
    *(ptr++); //adresi arttırdı.
    printf("*(ptr++) = %d\n", *ptr);
    *(ptr)++; //adresi arttırdı.
    printf("*(ptr)++ = %d\n", *ptr);
    
    *(++ptr); //adresi arttırdı
    printf("*(++ptr) = %d\n", *ptr);
    ++*ptr; //adreste bulunan değeri arttırdı.
    printf("++*ptr = %d\n", *ptr);
    ++*(ptr); //adreste bulunan degeri arttırdı.
    printf("++*(ptr) = %d\n", *ptr);

    return 0;
}
