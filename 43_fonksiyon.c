#include <stdio.h>

int kare(int sayi);

int main()
{
    int sayi;

    printf("Bir sayi yaziniz:");
    scanf("%d", &sayi);

    printf("\n\nGirdiginiz sayinin karesi: %d", kare(sayi));

    return 0;
}

int kare(int s)
{
    return s * s;
}