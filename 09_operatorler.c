#include <stdio.h>

void main()
{
    int sayi1 = 64, sayi2 = 20;
    float sonuc;

    //casting: bir veri türünü bir başka veri türüne dönüştürme
    //işlemi

    //toplama islemi +
    sonuc = (float) (sayi1 + sayi2);

    printf("%d + %d = %.0f\n\n", sayi1, sayi2, sonuc);

    //çıkarma islemi -
    sonuc = (float) (sayi1 - sayi2);
    printf("%d - %d = %.0f\n\n", sayi1, sayi2, sonuc);
   
    //çarpma islemi *
    sonuc = (float) (sayi1 * sayi2);
    printf("%d x %d = %.0f\n\n", sayi1, sayi2, sonuc);
   
    //bölme islemi /
    sonuc = (float) sayi1 / (float) sayi2;
    printf("%d / %d = %.3f\n\n", sayi1, sayi2, sonuc);
   
    //kalan bulma (mod) islemi %
    sonuc = (float) (sayi1 % sayi2);
    printf("%d mod %d = %.0f\n\n", sayi1, sayi2, sonuc);
   


}
