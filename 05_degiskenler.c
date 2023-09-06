#include <stdio.h>

void main(){

    /*Degisken tanimlarken

    1. Degisken ismi bosluk ve ozel karakter (!'^#+$%&/().:,; ) iceremez.
    2. Degisken ismi rakamla baslayamaz 
    3. Ozel karakter olarak sadece underscore (_) karakteri icerebilir
    4. Degisken isimleri buyuk kucuk harf duyarlidir. 
        Sayi, sayi, SAYI, saYi, ... farkli degiskenlerdir.
    */
    int sayi1=0, sayi2=2, sayi3;

    int sayi4, sayi5=3;

    int sayi6;

    int x;

    int _1sayi;


    printf("bir tamsayi yaziniz: ");
    scanf("%d", &x);
    printf("\n");

    //sayi6 değerini x'in değeri olarak belirle/tanımla
    sayi6 = x;

    printf("sayi6 degiskeni icinde %d, x degiskeni icinde ise %d vardir.", sayi6, x);
    printf("\n");
    printf("\n");
    //x içine sayi2 değerini ekle
    x = x + sayi2;

    printf("sayi2 degiskeni icinde %d, x degiskeni icinde ise %d vardir.", sayi2, x);
    printf("\n");
    printf("\n");


    //x'ten 4 çıkar ve x'in yeni değeri olarak belirle
    x = x - 4;
    printf(" x degiskeninin yeni degeri %d olarak tanimlanmistir.",  x);
    printf("\n");
    printf("\n");

    





    
}