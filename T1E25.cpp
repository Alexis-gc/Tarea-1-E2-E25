#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int  main (void) {

     char color;

    printf ("Introduzca una letra mayúscula o minuscula:");
    scanf ("%c",&color);

    switch (color) {
        case  'v':
        case  'V':
            printf ("\n Verde \n " );
        break ;
        case  'a':
        case  'A':
            printf ("\n Azul \n " );
        break ;
        case 'r':
        case  'R':
            printf ("\n Rojo \n " );
        break ;
        default :
            printf ("\n Negro \n " );
    }

}

