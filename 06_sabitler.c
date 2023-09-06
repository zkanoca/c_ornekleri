#include <stdio.h>

void main()
{
    // const int birSaattekiDakikaSayisi = 60;
    // const int birDakikadakiSaniyeSayisi = 60;
    const float piSayisi = 3.14;
    float r, cevre;

    printf("Cemberin yaricapini yaziniz:");
    scanf("%f", &r);

    cevre = 2 * piSayisi * r;


    printf("\n");
    printf("\n");
    printf("Cemberin cevresi %.3f birimdir.", cevre);
    printf("Cemberin alani %.3f birimdir.", piSayisi * r * r);


}