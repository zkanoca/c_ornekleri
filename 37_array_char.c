#include <stdio.h>

void main()
{
    system("cls");

    char isim[10] = {'b', 'i', 'l', 'g', 'i', 's', 'a', 'y', 'a', 'r'};
    int i;
    

    isim[2] = 'v';
    isim[0] = 's';
    isim[1] = 'e';

    // ekrana kelimeyi yazdır
    for (i = 0; i < 10; i++)
    {
        printf("%c", isim[i]);
    }

    // ekrana sesli harfleri yazdır.
    printf("\nSesli Harfler\n");
    for (i = 0; i < 10; i++)
    {
        //eğer harf sesli harf ise ekrana yazdır.
        if (isim[i] == 'a' || isim[i] == 'e' || isim[i] == 'i' || isim[i] == 'o' || isim[i] == 'u')
        {
            printf("%c", isim[i]);
        }
    }
}