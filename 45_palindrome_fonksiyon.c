#include <stdio.h>

int main()
{
    system("cls");

    int sayi, tersi;

    printf("Bir sayi yaziniz: ");

    scanf("%d", &sayi);

    tersi = palindrome(sayi);

    printf("\n\n%d sayisinin tersi %d olarak bulunmustur.", sayi, tersi);

    if (sayi == tersi)
    {
        printf("\n\n%d bir palindrome sayidir.", sayi);
    }
    
    return 0;
}

int palindrome(int sayi)
{
    int kalan, tersi;

    if (sayi < 10 && sayi >= 0)
    {
        return sayi;
    }
    else
    {
        for (; sayi != 0; sayi /= 10)
        {
            kalan = sayi % 10;
            tersi = kalan + tersi * 10;
        }
    }
    return tersi;
}