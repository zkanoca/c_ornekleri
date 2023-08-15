#include <stdio.h>

void main()
{
    int intSayi, IntSayi, iNtSayi;
    float floatSayi;
    double doubleSayi;
    char karakter;
    char kelime[] = "C Ogreniyorum!";

    intSayi = 1238;

    floatSayi = 45.321;

    doubleSayi = 34.902587;

    karakter = 'r';

    //değişken isimlendirme yöntemleri
    /*
        1. camelCase: Birkaç kelimeden oluşuyorsa birinci kelime küçük
           harflerle, devam eden kelimelerin sadece baş harfi büyük

        2. PascalCase: Her kelimenin baş harfi büyük

        3. snake_case: Her kelime arasına _ karakteri koyulur.

        4. kebab-case: Her kelimenin arasına - karakteri koyulur.
    */
   //%d expression identifier: tam sayı için
   printf("intSayi degiskeni icinde tutulan deger: %d\n", intSayi);

   //%f exp. id. : kayan noktalı değerler için
   printf("floatSayi degiskeni icinde tutulan deger: %f\n", floatSayi);

   //tam kısmını 5 basamaga kadar, noktadan sonra 3 basamak göster 
   printf("floatSayi degiskeni icinde tutulan deger: %.3f\n", floatSayi);

   //%f ile gösterilir.
   printf("doubleSayi degiskeni icinde tutulan deger: %.3f\n", doubleSayi);

   //char tipi ex. id. : %c ile gösterilir.
   printf("Karakterimiz: %c\n", karakter);

   //string tipi ex. id. : %s ile gösterilir.
   printf("Kelime degiskeni icinde bulunan ifade: %s\n", kelime);

   //Sadece bir harf göstersin.
   printf("Kelime degiskeni icinde bulunan ifadenin 4. harfi: %c\n", kelime[3]);
   //string tipi ex. id. : %s ile gösterilir.
   printf("Kelime degiskeni icinde bulunan ifadenin 7. harfi: %c\n", kelime[6]);
}