#include <stdio.h>

void main()
{
    system("cls");

     /*
     Fibonacci serisi

    1 1 2 3 5 8 13 21 

     */

    int sinir, i, birinci = 0, ikinci = 1, siradaki;

    printf("Fibonacci serisinin terim sayisini giriniz: ");
    scanf("%d", &sinir);


    for(i = 0; i < sinir; i++)
    {
        if ( i < 1)
        {
            siradaki = 1;
        }
        else{
            siradaki = birinci + ikinci;
            birinci = ikinci;
            ikinci = siradaki;
        }

        printf("%d ", siradaki);
    }

}