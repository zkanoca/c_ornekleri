#include <stdio.h>

#define PI 3.142857

float cember_alan(float yaricap);
float cember_cevre(float yaricap);


int main()
{

    //yaricap
    float r, cevre, alan;

    printf("Cemberin yaricapini giriniz:");
    scanf("%f", &r);

    cevre = cember_cevre(r);
    alan = cember_alan(r);

    printf("\nCemberin cevresi: %.2f birimdir", cevre);
    printf("\nCemberin alani: %.2f birimkaredir", alan);

    return 0;
}

float cember_alan(float yaricap)
{
    return PI * yaricap * yaricap;
}

float cember_cevre(float yaricap)
{
    return 2 * PI * yaricap;
}