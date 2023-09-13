#include <stdio.h>
int fibonacci(int s)
{
    if( s == 0)
    {
        return 0;
    }
    else if(s == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(s - 1) + fibonacci(s - 2);
    }
}
void fibonacci_serisi_yazdir(int sayi) //35
{
    int i = 0, fib;
    while(1)
    {
        fib = fibonacci(i);
        if(fib > sayi) //1 > 35 x
        {
            break;
        }
        printf("%d  ", fib);
        i++;
    }
}


int main()
{
    int sinir;

    printf("Fibonacci serisi icin sinir degeri yaziniz:");
    scanf("%d", &sinir);

    fibonacci_serisi_yazdir(sinir);
    return 0;
}