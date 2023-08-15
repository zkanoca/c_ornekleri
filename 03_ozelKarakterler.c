#include <stdio.h>

// Escape sequences
/*
    \n
    \t
    \\
    \"
    \'
*/
void main()
{

    printf("Bazi ozel karakterleri yazdirmak istiyorum.\n");

    // \ karakterini ekrana yaz
    printf("ters slash \\");

    // yeni satıra geç
    printf("\n");

    // " karakterini yazdırmak için \"
    printf(" \"Gel\" diye bana seslendi.");

    printf("\n");

    // \' tek tırnak işareti
    printf("Bugun Istanbul\'da hava cok sicak.\n");

    printf("Adi\tSoyadi\n");
    printf("John\tStewart\n");
    printf("Mike\tFitzgerald\n");
}