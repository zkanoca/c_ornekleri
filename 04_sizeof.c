#include <stdio.h>

void main()
{
    int sayi1 = 10; //4B yer tutar

    int sayi2 = 20; //4B yer tutar

    double sonuc; //8B yer tutar

    sonuc = sayi1 / sayi2;


    printf("Birinci sayi: %d\nIkinci sayi: %d\nSonuc: %d", sayi1, sayi2, sonuc);

    printf("\n\n\nBirinci degiskenin hafizada kapladigi alan: %d B", sizeof(sayi1));
    printf("\n\n\nIkinci degiskenin hafizada kapladigi alan: %d B", sizeof(sayi2));
    printf("\n\n\nSonuc degiskenin hafizada kapladigi alan: %d B", sizeof(sonuc));
    
    //Degiskenlerin tutuldugu bellek adreslerinin decimal degerleri
    printf("\n\n\nBirinci degiskenin hafizada tutuldugu adres: %d", &sayi1);
    printf("\n\n\nIkinci degiskenin hafizada tutuldugu adres: %d", &sayi2);
    printf("\n\n\nToplam degiskeninin hafizada tutuldugu adres: %d", &sonuc);

    //Degiskenlerin tutuldugu bellek adreslerinin hex degerleri
    printf("\n\n\nBirinci degiskenin hafizada tutuldugu adres: %x", &sayi1);
    printf("\n\n\nIkinci degiskenin hafizada tutuldugu adres: %x", &sayi2);
    printf("\n\n\nToplam degiskeninin hafizada tutuldugu adres: %x", &sonuc);
}