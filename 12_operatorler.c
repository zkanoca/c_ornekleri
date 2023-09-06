#include <stdio.h>

void main()
{

    system("cls");

    int a = 10, b = 15, c = 10, sonuc;

    /*
        X Y | VE  | VEYA
        ----+-----+------ 
        0 0 | 0   | 0
        0 1 | 0   | 1
        1 0 | 0   | 1
        1 1 | 1   | 1
    */

    sonuc = (a == c) || (b > c); //VEYA ||

    printf("a c'ye esitse VEYA b c'den buyukse: %d\n\n", sonuc);

    sonuc = (a >= c) && (b < c); //VE &&

    printf("a c'den buyukse veya c'ye esitse VE b c'den kucukse: %d\n\n", sonuc);

    sonuc = (a >= c) && !(b < c); //VE &&

    printf("a c'den buyukse veya c'ye esitse VE b c'den kucuk degilse: %d\n\n", sonuc);



}