#include <stdio.h>
double kuvvet(float taban, int us)
{
    if (us != 0)
    {
        return taban * kuvvet(taban, us-1);
        //3 * 3^3
              //3 * 3^2
                    //3 * 3^1
                          // 3 * 3^0  
    }
    else
    {
        return 1;
    }
}
int main()
{
    float sayi;   // sayinin kendisi
    int us;       // sayinin kuvveti
    double sonuc; // sayi^us

    printf("Bir sayi yaziniz: ");
    scanf("%f", &sayi);

    printf("\nGirdiginiz sayinin hesaplamak istediginiz kuvvetini yaziniz: ");
    scanf("%d", &us);

    sonuc = kuvvet(sayi, us);

    printf("\n%f sayisinin %d. kuvveti: %.4f olarak hesaplanmistir.", sayi, us, sonuc);

    return 0;
}