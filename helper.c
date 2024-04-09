//
// Created by Fran on 09/04/2024.
//

#include "helper.h"
#include "string.h"
#include "stdlib.h"
char *Union(char *cadena1,char *cadena2)
{
    int x= strlen(cadena1);
    int y= strlen(cadena2);

    char *cadenanueva=malloc(sizeof(x+y+1));

    if(cadenanueva==NULL)
    {
        printf("Error");
    }
    strcpy(cadenanueva,cadena1);

    strcat(cadenanueva,cadena2);
    return cadenanueva;
}