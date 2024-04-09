#include <stdio.h>
#include "helper.h"

int main()
{
    char cadena1[]=("yo ");
    char cadena2[]=("estoy bien ");
    *Union(cadena1, cadena2);
    printf("%s", Union(cadena1,cadena2));

    return 0;
}
