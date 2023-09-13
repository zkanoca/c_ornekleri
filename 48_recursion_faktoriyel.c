#include <stdio.h>

// int faktoriyel(int sayi);


int faktor(int sayi)
{
    int f=1;

    printf("\nf adresi: %x", &f);

    if (sayi < 0)
    {
        return 0;
    }
    else if (sayi == 0 || sayi == 1)
    {
        return 1;
    }
    else
    {
        f *= sayi * faktor(sayi-1);
        // 5*f(4)  
        // 5 * 4 * (f3)
        // 5 * 4 * 3 * (f2)
        // 5 * 4 * 3 * 2 * (f1)
    }

    return f;
}

int main()
{
    int sayi, faktoriyel;

    printf("Bir tamsayi yaziniz:");
    scanf("%d", &sayi);

    faktoriyel = faktor(sayi);

    printf("%d sayisinin faktoriyeli %d olarak hesaplanmistir.", sayi, faktoriyel);

    return 0;
}