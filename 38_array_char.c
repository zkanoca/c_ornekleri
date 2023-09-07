#include <stdio.h>

void main()
{
    system("cls");

    char isim[10] = {'b', 'i', 'l', 'g', 'i', 's', 'a', 'y', 'a', 'r'};
    int i;
    // a, e, i, o, u
    int sh[5] = {0, 0, 0, 0, 0};
    char sesliHarfler[5] = {'a', 'e', 'i', 'o', 'u'};

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
        // eğer harf sesli harf ise ekrana yazdır.
        if (isim[i] == 'a')
        {
            sh[0]++;
        }

        if (isim[i] == 'e')
        {
            sh[1]++;
        }
        if (isim[i] == 'i')
        {
            sh[2]++;
        }

        if (isim[i] == 'o')
        {
            sh[3]++;
        }
        if (isim[i] == 'u')
        {
            sh[4]++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        sh[i] > 0 ? printf("%c", sesliHarfler[i]) : printf("\0");
    }
}